//
// Created by User on 27.04.2018.
//

#include <iostream>
#include "MyList.h"

MyList::MyList() {
    size = 0;
    head = nullptr;
}

void MyList::addInHead(int value) {
    Item * item = new Item;
    item->value = value;
    item->next = head;
    if (size == 0) {
        tail = item;
    }
    head = item;
    size++;

}

void MyList::addInTail(int value) {
    Item * item = new Item;
    item->value = value;
    item->next = nullptr;
    if (size == 0) {
        head = item;
    } else {
        tail->next = item;
    }
    tail = item;
    size++;
}

int MyList::remove() {
    int res = head->value;
    Item * tmp = head;
    head = head->next;
    delete tmp;
    size--;
    return res;
}

int MyList::getSize() {
    return size;
}

void MyList::printAll() {
    for (Item * p = head; p != nullptr; p = p->next) {
        std::cout << p->value << " ";
    }
    std::cout << std::endl;
}
