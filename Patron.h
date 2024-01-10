// Patron.h

#ifndef PATRON_H
#define PATRON_H

#include <iostream>
#include <string>

class Patron {
private:
    std::string name;
    std::string memberID;

public:
    Patron(const std::string& name, const std::string& memberID);

    void display() const;
};

#endif // PATRON_H
