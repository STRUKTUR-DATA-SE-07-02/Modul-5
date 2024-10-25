#include "singlelist.h"

int main() {
    List L;
    address P1, P2, P3, P4, P5;

    // Buat list kosong
    createList(L);

    // Alokasi dan insert elemen ke dalam list
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

    // Tampilkan semua elemen dalam list
    printInfo(L);

    // Mencari elemen dengan info 8
    address found = findElm(L, 8);
    if (found != NULL) {
        cout << "Elemen dengan info 8 ditemukan." << endl;
    } else {
        cout << "Elemen dengan info 8 tidak ditemukan." << endl;
    }

    // Menghitung total info semua elemen
    int total = totalInfo(L);
    cout << "Total info semua elemen: " << total << endl;

    return 0;
}