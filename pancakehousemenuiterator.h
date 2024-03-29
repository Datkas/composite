#ifndef PANCAKEHOUSEMENUITERATOR_H
#define PANCAKEHOUSEMENUITERATOR_H

#include <list>
#include "Iterator.h"
#include "menuitem.h"

class PancakeHouseMenuIterator : public Iterator {
private:
    list<MenuItem*> items;
    int position;
public:
    PancakeHouseMenuIterator(list<MenuItem*> items);
    void* next();
    bool hasNext();
};

#endif
