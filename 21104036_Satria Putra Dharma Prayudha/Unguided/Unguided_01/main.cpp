#include "singlelist.h"

int main() {
    List L;
    createList(L);  // Membuat list kosong

    // Alokasi dan masukkan beberapa elemen ke dalam list
    address P1 = alokasi(2);
    address P2 = alokasi(0);
    address P3 = alokasi(8);
    address P4 = alokasi(12);
    address P5 = alokasi(9);

    // Menambahkan elemen-elemen tersebut ke dalam list
    insertFirst(L, P1);  // Menambahkan elemen 2
    insertFirst(L, P2);  // Menambahkan elemen 0
    insertFirst(L, P3);  // Menambahkan elemen 8
    insertFirst(L, P4);  // Menambahkan elemen 12
    insertFirst(L, P5);  // Menambahkan elemen 9

    // Cetak semua elemen di dalam list
    cout << "Isi dari Linked List: ";
    printInfo(L);  // Output: 9 12 8 0 2 

    return 0;
}
