#ifndef DINERMENUITERATOR_H
#define DINERMENUITERATOR_H

#include "Iterator.h"
#include "menuitem.h"
#include <vector>

class DinerMenuIterator : public Iterator {
private:
    vector <MenuItem*> items;
    int position;
public:
    DinerMenuIterator(vector<MenuItem*> items);
    bool hasNext();
    void* next();
};

#endif
