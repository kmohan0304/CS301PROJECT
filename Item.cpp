#include "Item.h"
#include <iostream>
#include <iomanip>

// Constructors
Item::Item() { // Default constructor
    name = " "; // set a generic name and price of $0.00
    price = 0;
}

Item::Item(std::string str, double prc) { // normal constructor
    name = str;
    price = prc;
}

void Item::setName(std::string newName) {
    name = newName;
}

void Item::setPrice(double newPrice) {
    price = newPrice;
}

std::string Item::getName() {
    return name;
}

double Item::getPrice() {
    return price;
}

void Item::printItem() {
    std::cout << std::fixed << std::setprecision(2)
             << name << ": $" << price << std::endl;
}

bool Item::operator==(Item const rhs) {
    if (name == rhs.name && price == rhs.price) {
        return true;
    }
    return false;
}
