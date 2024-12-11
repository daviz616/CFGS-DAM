#include <stdio.h>
#include <string.h>

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
void printAllBooks( const Book * catalog){
    for(int i = 0; i < MAX_BOOKS; i++){
        printBook(&catalog[i]);
        }
}

// Busca e imprime un libro por su ID introducido por el usuario.
// Uso de paso por referencia para evitar copiar todo el catálogo.
void printIDBook( const Book * catalog){
     // La función recibe un puntero constante a un array de libros 'catalog'.
    // Esto significa que se trabaja directamente con la dirección de memoria del catálogo,
    // en lugar de hacer una copia completa de los datos. 
    // Además, el 'const' asegura que esta función no puede modificar los datos del catálogo.
    int id;
    printf("Introduce the ID of the book that you want: ");
    scanf("%d", &id);
    for(int i = 0; i < MAX_BOOKS ; i++){
        if (catalog[i].id == id){
            printBook(&catalog[i]);
        }
    }
}// Si el ID no coincide con ningún libro, simplemente no se realiza ninguna acción.


// Incrementa el stock de un libro específico.
// Paso por referencia (no constante) para modificar el catálogo directamente.
void printStockIDQuantity(Book * catalog){
    int id;
    printf("Introduce the ID of the book that you want to increase: ");
    scanf("%d", &id);
    int PlusBook; 
    printf("Introduce the quantity of the book to increase ");
    scanf("%d",&PlusBook);

    for(int i = 0; i < MAX_BOOKS ; i++){
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
void printBookCategory(Book * catalog){
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

//argc: número de argumentos recibidos.
//argv: array de cadenas de texto.

int main(int argc, char ** argv ){

        //Hay que definir inicializarLibro.(Como he quitado el Books Book[MAX_BOOKS])
        inicializarLibro(1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICTION, 10);
        inicializarLibro(2, "1984", "George Orwell", 12.49, FICTION, 5);
        inicializarLibro(3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICTION, 8);
        inicializarLibro(4, "Moby Dick", "Herman Melville", 18.99, FICTION, 12);
        inicializarLibro(5, "War and Peace", "Leo Tolstoy", 20.00, FICTION, 7);
        inicializarLibro(6, "Pride and Prejudice", "Jane Austen", 14.99, FICTION, 9);
        inicializarLibro(7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICTION, 6);
        inicializarLibro(8, "The Odyssey", "Homer", 17.49, FICTION, 4);
        inicializarLibro(9, "Ulysses", "James Joyce", 25.00, FICTION, 2);
        inicializarLibro(10, "The Divine Comedy", "Dante Alighieri", 22.00, POETRY, 3);
        inicializarLibro(11, "Leaves of Grass", "Walt Whitman", 13.00, POETRY, 11);
        inicializarLibro(12, "The Iliad", "Homer", 18.50, FICTION, 7);
        inicializarLibro(13, "A Brief History of Time", "Stephen Hawking", 15.00, NON_FICTION, 15);
        inicializarLibro(14, "The Art of War", "Sun Tzu", 9.99, NON_FICTION, 20);
        inicializarLibro(15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NON_FICTION, 13);
        inicializarLibro(16, "The Selfish Gene", "Richard Dawkins", 14.00, NON_FICTION, 6);
        inicializarLibro(17, "The Road to Serfdom", "F.A. Hayek", 10.50, NON_FICTION, 5);
        inicializarLibro(18, "The Wealth of Nations", "Adam Smith", 30.00, NON_FICTION, 8);
        inicializarLibro(19, "On the Origin of Species", "Charles Darwin", 24.99, NON_FICTION, 4);
        inicializarLibro(20, "The Prince", "Niccolò Machiavelli", 8.99, NON_FICTION, 14);
        inicializarLibro(21, "Hamlet", "William Shakespeare", 11.50, THEATER, 6);
        inicializarLibro(22, "Macbeth", "William Shakespeare", 9.50, THEATER, 8);
        inicializarLibro(23, "Othello", "William Shakespeare", 10.99, THEATER, 7);
        inicializarLibro(24, "A Doll's House", "Henrik Ibsen", 12.50, THEATER, 5);
        inicializarLibro(25, "Waiting for Godot", "Samuel Beckett", 13.99, THEATER, 4);
        inicializarLibro(26, "Death of a Salesman", "Arthur Miller", 14.99, THEATER, 10);
        inicializarLibro(27, "The Glass Menagerie", "Tennessee Williams", 11.00, THEATER, 9);
        inicializarLibro(28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, THEATER, 3);
        inicializarLibro(29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, THEATER, 15);
        inicializarLibro(30, "The Waste Land", "T.S. Eliot", 6.99, POETRY, 10);
        inicializarLibro(31, "Paradise Lost", "John Milton", 12.00, POETRY, 7);
        inicializarLibro(32, "Beowulf", "Anonymous", 15.00, POETRY, 5);
        inicializarLibro(33, "Essays", "Michel de Montaigne", 20.00, ESSAY, 4);
        inicializarLibro(34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ESSAY, 9);
        inicializarLibro(35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ESSAY, 11);
        inicializarLibro(36, "Meditations", "Marcus Aurelius", 11.99, ESSAY, 8);
        inicializarLibro(37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ESSAY, 5);
        inicializarLibro(38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ESSAY, 12);
        inicializarLibro(39, "The Republic", "Plato", 16.00, ESSAY, 6);
        inicializarLibro(40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ESSAY, 10);

    printf("Lista de argumentos:\n");
    for (int i = 0; i<argc; i++){
         printf("\t Argumento %d: %s\n", i, argv[i]);

    }
    if (argc == 1){
        printAllBooks(catalog);// Paso por referencia evita duplicar el catálogo completo en memoria.
    printIDBook(catalog);//muestra el libro al introducir el ID
    // Permite consultar la información específica de un libro basado en su identificador único.
    printStockIDQuantity(catalog);// Incrementa la cantidad disponible de un libro específico.
    // Modifica directamente el catálogo, mostrando la nueva cantidad.
    printBookCategory(catalog); // Filtra los libros por categoría y los imprime.
    }
    if (argc > 1){
        if (argc[1] == "show" && argc[2]){
            
            printBook(&catalog[i]);
        }
   
    return 0;
}