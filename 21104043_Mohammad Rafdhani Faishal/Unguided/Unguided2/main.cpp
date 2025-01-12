#include "singlelist.h"

int main() {
    List L;
    createList(L);  

    address P1 = alokasi(2);
    address P2 = alokasi(0);
    address P3 = alokasi(8);
    address P4 = alokasi(12);
    address P5 = alokasi(9);

    insertFirst(L, P1);  
    insertFirst(L, P2);  
    insertFirst(L, P3);  
    insertFirst(L, P4);  
    insertFirst(L, P5);  

    address result = findElm(L, 8);
    if (result != nullptr) {
        cout << "Elemen dengan info 8 ditemukan." << endl;
    } else {
        cout << "Elemen dengan info 8 tidak ditemukan." << endl;
    }

    return 0;
}