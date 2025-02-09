#include "singlelist.h"
#include <iostream>

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5 = nullptr;

    createList(L);

    P1 = alokasi(9);
    insertFirst(L, P1);

    P2 = alokasi(12);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(10);
    insertFirst(L, P4);

    P5 = alokasi(2);
    insertFirst(L, P5);

    printInfo(L);

    int total = sumInfo(L);
    cout << "Total info dari kelima elemen adalah " << total << endl;

    return 0;
}
