//
// Created by User on 27.04.2018.
//

#ifndef UNTITLED19_MYLIST_H
#define UNTITLED19_MYLIST_H


#include "Item.h"

class MyList {
private:
    int size;
    Item * head;
    Item * tail;
public:
    MyList();
    void addInHead(int value);
    void addInTail(int value);
    int remove();
    int getSize();
    void printAll();
};


#endif //UNTITLED19_MYLIST_H
