#ifndef MENUCOMPONENT_H
#define MENUCOMPONENT_H

#include "unsupportedoperationexception.h"

class MenuComponent {
public:
    virtual void add(MenuComponent *menuComponent);
    virtual void remove(MenuComponent *menuComponent);
    virtual MenuComponent* getChild(int i);

    virtual std::string getName();
    virtual std::string getDescription();
    virtual double getPrice();
    virtual bool isVegeterian();
    virtual void print();
};


#endif
