#include <iostream>
#include "singlelist.h"

using namespace std;

int main() {
    // Deklarasi variabel
    List L;
    address P1, P2, P3, P4, P5;

    // Membuat list kosong
    buatList(L);

    // Membuat dan menyisipkan node-node baru
    P1 = alokasi(2);
    sisipDepan(L, P1);

    P2 = alokasi(0);
    sisipDepan(L, P2);

    P3 = alokasi(8);
    sisipDepan(L, P3);

    P4 = alokasi(12);
    sisipDepan(L, P4);

    P5 = alokasi(9);
    sisipDepan(L, P5);

    // Menampilkan isi list
    cout << "Isi Linked List: ";
    cetakInfo(L);

    return 0;
}
