#include <iostream>
#include "singglelist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5 = NULL;

    createList(L);

    // Alokasi dan memasukkan nilai sesuai urutan dalam ilustrasi
    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    // Mencari elemen dengan info 8
    address found = findElm(L, 8);
    if (found != NULL) {
        cout << "8 ditemukan dalam list." << endl;
    } else {
        cout << "Elemen dengan info 8 tidak ditemukan." << endl;
    }

    return 0;
}
