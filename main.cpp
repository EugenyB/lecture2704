#include <iostream>
#include "MyList.h"


using namespace std;

int main() {
    MyList list;
    for (int i = 1; i <= 10; ++i) {
        list.addInTail(i);
    }
    cout << "size: " << list.getSize() << endl;

    list.printAll();
    return 0;
}