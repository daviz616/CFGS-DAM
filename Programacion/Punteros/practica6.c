#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BOOKS 40
#define TITLE_MAX 80
#define AUTHOR_MAX 40

typedef enum {
    FICTION,
    NON_FICTION,
    POETRY,
    THEATER,
    ESSAY
} Category;

typedef struct {
    int id;
    char title[TITLE_MAX];
    char author[AUTHOR_MAX];
    float price;
    Category cat;
    int stock;
} Book;

Book books[MAX_BOOKS] = {
    {1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICTION, 10},
    {2, "1984", "George Orwell", 12.49, FICTION, 5},
    // (El resto de los libros inicializados como en la descripción del problema)
};

const char *categoryToString(Category cat) {
    switch (cat) {
        case FICTION: return "FICTION";
        case NON_FICTION: return "NON_FICTION";
        case POETRY: return "POETRY";
        case THEATER: return "THEATER";
        case ESSAY: return "ESSAY";
        default: return "UNKNOWN";
    }
}

void displayBook(const Book *book) {
    printf("ID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\nCategory: %s\nStock: %d\n\n",
           book->id, book->title, book->author, book->price, categoryToString(book->cat), book->stock);
}

void displayAllBooks(const Book books[], int size) {
    for (int i = 0; i < size; i++) {
        displayBook(&books[i]);
    }
}

void displayBooksByCategory(const Book books[], int size, Category cat) {
    for (int i = 0; i < size; i++) {
        if (books[i].cat == cat) {
            displayBook(&books[i]);
        }
    }
}

void displayBooksByAuthor(const Book books[], int size, const char *author) {
    for (int i = 0; i < size; i++) {
        if (strcmp(books[i].author, author) == 0) {
            displayBook(&books[i]);
        }
    }
}

Book* findBookById(Book books[], int size, int id) {
    for (int i = 0; i < size; i++) {
        if (books[i].id == id) {
            return &books[i];
        }
    }
    return NULL;
}

void updateStock(Book *book, int quantity) {
    book->stock += quantity;
    printf("Updated Stock:\n");
    displayBook(book);
}

void saveCatalog(const char *filename, const Book books[], int size) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Error saving catalog");
        return;
    }
    fwrite(books, sizeof(Book), size, file);
    fclose(file);
    printf("Catalog saved successfully.\n");
}

int loadCatalog(const char *filename, Book books[], int maxSize) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Error loading catalog");
        return 0;
    }
    int size = fread(books, sizeof(Book), maxSize, file);
    fclose(file);
    printf("Catalog loaded successfully.\n");
    return size;
}

void printUsage() {
    printf("Usage:\n");
    printf("./biblioteca mostrar\n");
    printf("./biblioteca mostrar [ID]\n");
    printf("./biblioteca stock [ID] [quantity]\n");
    printf("./biblioteca categoria [Category]\n");
    printf("./biblioteca autor [Author]\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printUsage();
        return 1;
    }

    const char *command = argv[1];

    if (strcmp(command, "mostrar") == 0) {
        if (argc == 2) {
            displayAllBooks(books, MAX_BOOKS);
        } else if (argc == 3) {
            int id = atoi(argv[2]);
            Book *book = findBookById(books, MAX_BOOKS, id);
            if (book) {
                displayBook(book);
            } else {
                printf("Book with ID %d not found.\n", id);
            }
        } else {
            printUsage();
        }
    } else if (strcmp(command, "stock") == 0 && argc == 4) {
        int id = atoi(argv[2]);
        int quantity = atoi(argv[3]);
        Book *book = findBookById(books, MAX_BOOKS, id);
        if (book) {
            updateStock(book, quantity);
        } else {
            printf("Book with ID %d not found.\n", id);
        }
    } else if (strcmp(command, "categoria") == 0 && argc == 3) {
        const char *catStr = argv[2];
        Category cat;
        if (strcmp(catStr, "FICTION") == 0) cat = FICTION;
        else if (strcmp(catStr, "NON_FICTION") == 0) cat = NON_FICTION;
        else if (strcmp(catStr, "POETRY") == 0) cat = POETRY;
        else if (strcmp(catStr, "THEATER") == 0) cat = THEATER;
        else if (strcmp(catStr, "ESSAY") == 0) cat = ESSAY;
        else {
            printf("Invalid category: %s\n", catStr);
            return 1;
        }
        displayBooksByCategory(books, MAX_BOOKS, cat);
    } else if (strcmp(command, "autor") == 0 && argc == 3) {
        const char *author = argv[2];
        displayBooksByAuthor(books, MAX_BOOKS, author);
    } else {
        printUsage();
    }

    return 0;
}
