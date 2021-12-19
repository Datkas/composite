#ifndef MENU_H
#define MENU_H

#include "Iterator.h"
#include "menucomponent.h"
#include "menuitem.h"
#include <list>

class Menu : public MenuComponent {
private:
    list<MenuComponent*> menuComponents;
    string name;
    string description;
public:
    Menu(string name, string description);
    virtual void add(MenuComponent *menuComponent);
    void remove(MenuComponent *menuComponent);
    MenuComponent* getChild(int i);

    std::string getName();
    std::string getDescription();
    void print();
};

#endif
