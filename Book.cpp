// Book.cpp

#include "Book.h"

Book::Book(const std::string& title, const std::string& author, const std::string& ISBN)
    : title(title), author(author), ISBN(ISBN) {}

void Book::display() const {
    std::cout << "Title: " << title << ", Author: " << author << ", ISBN: " << ISBN << std::endl;
}
