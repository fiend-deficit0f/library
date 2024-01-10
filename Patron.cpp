// Patron.cpp

#include "Patron.h"

Patron::Patron(const std::string& name, const std::string& memberID)
    : name(name), memberID(memberID) {}

void Patron::display() const {
    std::cout << "Name: " << name << ", Member ID: " << memberID << std::endl;
}
