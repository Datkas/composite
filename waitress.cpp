#include "waitress.h"

Waitress::Waitress(MenuComponent* allMenus) {
    this->allMenus = allMenus;

}

void Waitress::printMenu() {
    allMenus->print();
}
