// Book.h

#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string ISBN;

public:
    Book(const std::string& title, const std::string& author, const std::string& ISBN);

    void display() const;
};

#endif // BOOK_H
