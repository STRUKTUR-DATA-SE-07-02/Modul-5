#include <iostream>
#include "singlelist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5 = nullptr;

    // Membuat list kosong
    createList(L);

    // Menyisipkan beberapa elemen ke dalam list
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

    // Menampilkan semua elemen dalam list
    cout << "Isi List: ";
    printInfo(L);

    // Mencari elemen dengan info 8
    address found = findElm(L, 8);
    if (found != nullptr) {
        cout << "Elemen dengan info 8 ditemukan: " << found->info << endl;
    } else {
        cout << "Elemen dengan info 8 tidak ditemukan" << endl;
    }

    // Menghitung total info dari semua elemen
    int total = totalInfo(L);
    cout << "Total nilai semua elemen: " << total << endl;

    return 0;
}