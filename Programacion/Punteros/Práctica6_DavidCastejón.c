#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definición de un enumerador para las categorías literarias.
// Uso de valores enteros asociados a los géneros, lo que simplifica las comparaciones.
typedef enum {
    FICTION, //0
    NON_FICTION,//1
    POETRY,//2
    THEATER,//3
    ESSAY//4
} Category;

// Estructura para almacenar la información de un libro.
// Incluye detalles clave como el ID único, título, autor, precio, género y cantidad disponible.
typedef struct {
    int id;
    char title[80];
    char author[60];
    float price;
    Category genre; // Categoría del libro, usando el enum de antes 'Category'.
    int quantity;
} Book;

#define MAX_BOOKS 40

// Imprime los detalles de un libro específico.
// Uso de un puntero constante 'const Book *' para evitar modificar el contenido del libro.
void printBook(const Book * OneBook){
    printf("%d, %s, %s, %.2f, %d, %d. \n",  
        OneBook->id, OneBook->title,
        OneBook->author,OneBook->price,
        OneBook->genre,OneBook->quantity);

}

// Imprime los detalles de todos los libros del catálogo.
// Se pasa un puntero constante al inicio del array para garantizar que no se modifique.
void printAllBooks( const Book * catalog, int catalogSize){
    for(int i = 0; i < catalogSize ; i++){
        printBook(&catalog[i]);
        }
}

// Busca e imprime un libro por su ID introducido por el usuario.
// Uso de paso por referencia para evitar copiar todo el catálogo.
void printIDBook( const Book * catalog, int catalogSize){
     // La función recibe un puntero constante a un array de libros 'catalog'.
    // Esto significa que se trabaja directamente con la dirección de memoria del catálogo,
    // en lugar de hacer una copia completa de los datos. 
    // Además, el 'const' asegura que esta función no puede modificar los datos del catálogo.
    int id;
    printf("Introduce the ID of the book that you want: ");
    scanf("%d", &id);
    for(int i = 0; i < catalogSize ; i++){
        if (catalog[i].id == id){
            printBook(&catalog[i]);
        }
    }
}// Si el ID no coincide con ningún libro, simplemente no se realiza ninguna acción.


// Incrementa el stock de un libro específico.
// Paso por referencia (no constante) para modificar el catálogo directamente.
void printStockIDQuantity(Book * catalog, int catalogSize){
    int id;
    printf("Introduce the ID of the book that you want to increase: ");
    scanf("%d", &id);
    int PlusBook; 
    printf("Introduce the quantity of the book to increase ");
    scanf("%d",&PlusBook);

    for(int i = 0; i < catalogSize; i++){
        if (catalog[i].id == id){
            catalog[i].quantity += PlusBook;
            printf("Stock aumented\n ");
            printBook(&catalog[i]);
            return;
        }
    }
}

// Filtra e imprime los libros de una categoría específica.
// Modifica el uso del catálogo para extraer libros de un género concreto.
void printBookCategory(Book * catalog, int catalogSize){
    int category_number; 
    printf("Please put the number of the category u want to see(0-FICTION,1-NON-FICTION,2-POETRY,3-THEATER,4-ESSAY:");      
    scanf("%d", &category_number);   
    if(category_number < 5){
        printf("Books in that category:\n");
        for(int i = 0; i < MAX_BOOKS; i++){
              if (catalog[i].genre == category_number) {
                    printBook(&catalog[i]);
            }
        
            }
        }
    }
    
void addBook(Book *newBook, int id, const char *title, const char *author, float price, Category genre, int quantity) {
    newBook->id = id;
    strncpy(newBook->title, title, sizeof(newBook->title) - 1);
    strncpy(newBook->author, author, sizeof(newBook->author) - 1);
    newBook->price = price;
    newBook->genre = genre;
    newBook->quantity = quantity;
}

//argc: número de argumentos recibidos.
//argv: array de cadenas de texto

int main(int argc, char **argv){
    // Definir el tamaño máximo de libros y asignar memoria dinámica.
    Book *catalog = (Book *)malloc(MAX_BOOKS * sizeof(Book));
    if (catalog == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Añadir todos los libros al catálogo.
    addBook(&catalog[0], 1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICTION, 10);
    addBook(&catalog[1], 2, "1984", "George Orwell", 12.49, FICTION, 5);
    addBook(&catalog[2], 3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICTION, 8);
    addBook(&catalog[3], 4, "Moby Dick", "Herman Melville", 18.99, FICTION, 12);
    addBook(&catalog[4], 5, "War and Peace", "Leo Tolstoy", 20.00, FICTION, 7);
    addBook(&catalog[5], 6, "Pride and Prejudice", "Jane Austen", 14.99, FICTION, 9);
    addBook(&catalog[6], 7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICTION, 6);
    addBook(&catalog[7], 8, "The Odyssey", "Homer", 17.49, FICTION, 4);
    addBook(&catalog[8], 9, "Ulysses", "James Joyce", 25.00, FICTION, 2);
    addBook(&catalog[9], 10, "The Divine Comedy", "Dante Alighieri", 22.00, POETRY, 3);
    addBook(&catalog[10], 11, "Leaves of Grass", "Walt Whitman", 13.00, POETRY, 11);
    addBook(&catalog[11], 12, "The Iliad", "Homer", 18.50, FICTION, 7);
    addBook(&catalog[12], 13, "A Brief History of Time", "Stephen Hawking", 15.00, NON_FICTION, 15);
    addBook(&catalog[13], 14, "The Art of War", "Sun Tzu", 9.99, NON_FICTION, 20);
    addBook(&catalog[14], 15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NON_FICTION, 13);
    addBook(&catalog[15], 16, "The Selfish Gene", "Richard Dawkins", 14.00, NON_FICTION, 6);
    addBook(&catalog[16], 17, "The Road to Serfdom", "F.A. Hayek", 10.50, NON_FICTION, 5);
    addBook(&catalog[17], 18, "The Wealth of Nations", "Adam Smith", 30.00, NON_FICTION, 8);
    addBook(&catalog[18], 19, "On the Origin of Species", "Charles Darwin", 24.99, NON_FICTION, 4);
    addBook(&catalog[19], 20, "The Prince", "Niccolò Machiavelli", 8.99, NON_FICTION, 14);
    addBook(&catalog[20], 21, "Hamlet", "William Shakespeare", 11.50, THEATER, 6);
    addBook(&catalog[21], 22, "Macbeth", "William Shakespeare", 9.50, THEATER, 8);
    addBook(&catalog[22], 23, "Othello", "William Shakespeare", 10.99, THEATER, 7);
    addBook(&catalog[23], 24, "A Doll's House", "Henrik Ibsen", 12.50, THEATER, 5);
    addBook(&catalog[24], 25, "Waiting for Godot", "Samuel Beckett", 13.99, THEATER, 4);
    addBook(&catalog[25], 26, "Death of a Salesman", "Arthur Miller", 14.99, THEATER, 10);
    addBook(&catalog[26], 27, "The Glass Menagerie", "Tennessee Williams", 11.00, THEATER, 9);
    addBook(&catalog[27], 28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, THEATER, 3);
    addBook(&catalog[28], 29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, THEATER, 15);
    addBook(&catalog[29], 30, "The Waste Land", "T.S. Eliot", 6.99, POETRY, 10);
    addBook(&catalog[30], 31, "Paradise Lost", "John Milton", 12.00, POETRY, 7);
    addBook(&catalog[31], 32, "Beowulf", "Anonymous", 15.00, POETRY, 5);
    addBook(&catalog[32], 33, "Essays", "Michel de Montaigne", 20.00, ESSAY, 4);
    addBook(&catalog[33], 34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ESSAY, 9);
    addBook(&catalog[34], 35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ESSAY, 11);
    addBook(&catalog[35], 36, "Meditations", "Marcus Aurelius", 11.99, ESSAY, 8);
    addBook(&catalog[36], 37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ESSAY, 5);
    addBook(&catalog[37], 38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ESSAY, 12);
    addBook(&catalog[38], 39, "The Republic", "Plato", 16.00, ESSAY, 6);
    addBook(&catalog[39], 40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ESSAY, 10);

    printf("Arguments list:\n");
    for (int i = 0; i < argc; i++) {
        printf("\t Argument %d: %s\n", i, argv[i]);
    }

    if (argc == 1) {
        printAllBooks(catalog, MAX_BOOKS); // Mostrar todos los libros.
        printIDBook(catalog, MAX_BOOKS);    // Mostrar libro por ID.
        printStockIDQuantity(catalog, MAX_BOOKS); // Incrementar cantidad de un libro.
        printBookCategory(catalog, MAX_BOOKS); // Filtrar libros por categoría.
    } 
    else if(argc == 2) {
        if (strcmp(argv[1], "show") == 0) {
            printAllBooks(catalog, MAX_BOOKS);
            printf("Llamo a la función mostrar\n");
        } else if (strcmp(argv[1], "") == 0) {
            printf("Llamo a la función añadir\n");
        }
    }

    // Liberar memoria cuando ya no se necesite
    free(catalog);

    return 0;
}