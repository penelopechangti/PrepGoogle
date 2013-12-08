#ifndef PREP_GOOGLE_HEAP_H
#define PREP_GOOGLE_HEAP_H

#include "datastructure.h"

class Heap: public TableInterface {
public:
    Heap();
    bool insert(int value); /* Average case O(n log n) */
    void sort();            /* Worst case O(n log n)
                               Average case O(n log n)
                               Best case O(n log n) */
    bool suppress(int value);
    int find(int value);    /* Returns the index of the value or -1 */
private:
    int find(int value, int father_index);
};

#endif // PRE_GOOGLE_HEAP_H
