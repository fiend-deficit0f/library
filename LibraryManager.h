// LibraryManager.h

#ifndef LIBRARY_MANAGER_H
#define LIBRARY_MANAGER_H

#include <vector>
#include "Book.h"
#include "Patron.h"

class LibraryManager {
private:
    std::vector<Book> books;
    std::vector<Patron> patrons;

public:
    void addBook(const Book& book);
    void addPatron(const Patron& patron);
    void displayBooks() const;
    void displayPatrons() const;
};

#endif // LIBRARY_MANAGER_H
