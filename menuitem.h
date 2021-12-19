#ifndef MENUITEM_H
#define MENUITEM_H

#include <iostream>
#include "menucomponent.h"

using namespace std;

class MenuItem : public MenuComponent {
private:
    string name;
    string description;
    bool vegetarian;
    double price;
public:
    MenuItem(string n, string d, bool v, double p);
    string getName();
    string getDescription();
    double getPrice();
    bool isVegetarian();
    void print();
};

#endif
