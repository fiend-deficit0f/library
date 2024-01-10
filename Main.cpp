// Main.cpp

#include "Book.h"
#include "Patron.h"
#include "LibraryManager.h"

int main() {
    // Create books
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "978-3-16-148410-0");
    Book book2("To Kill a Mockingbird", "Harper Lee", "978-0-06-112008-4");

    // Create patrons
    Patron patron1("Alice", "P001");
    Patron patron2("Bob", "P002");

    // Create a library manager
    LibraryManager libraryManager;

    // Add books and patrons to the library manager
    libraryManager.addBook(book1);
    libraryManager.addBook(book2);
    libraryManager.addPatron(patron1);
    libraryManager.addPatron(patron2);

    // Display library information
    libraryManager.displayBooks();
    libraryManager.displayPatrons();

    return 0;
}
