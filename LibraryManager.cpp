// LibraryManager.cpp

#include "LibraryManager.h"

void LibraryManager::addBook(const Book& book) {
    books.push_back(book);
}

void LibraryManager::addPatron(const Patron& patron) {
    patrons.push_back(patron);
}

void LibraryManager::displayBooks() const {
    std::cout << "Library Books:" << std::endl;
    for (const auto& book : books) {
        book.display();
    }
}

void LibraryManager::displayPatrons() const {
    std::cout << "Library Patrons:" << std::endl;
    for (const auto& patron : patrons) {
        patron.display();
    }
}
