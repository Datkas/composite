#include "menu.h"

Menu::Menu(string name, string description) {
    this->name = name;
    this->description = description;
}

void Menu::add(MenuComponent *menuComponent) {
    menuComponents.push_back(menuComponent);
}

void Menu::remove(MenuComponent *menuComponent) {
    menuComponents.remove(menuComponent);
}

MenuComponent* Menu::getChild(int i) {
    list<MenuComponent*>::iterator it = menuComponents.begin();
    std::advance(it, i);
    return (*it);
}

std::string Menu::getName() {
    return name;
}

std::string Menu::getDescription() {
    return description;
}

void Menu::print() {
    cout << "\n" << getName() << ", " << getDescription() << endl;
    cout << "---------------------------------" << endl;

    for (list<MenuComponent*>::iterator it = menuComponents.begin(); it != menuComponents.end(); it++) {
        MenuComponent *menuComponent = (MenuComponent*)*it;
        menuComponent->print();
    }
}
