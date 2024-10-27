#include "singlelist.h"

// Membuat list kosong
void createList(List &L) {
    L.first = nullptr;  // List awalnya kosong
}

// Alokasi elemen baru
address alokasi(infotype x) {
    address P = new elmlist;  // Membuat elemen baru
    if (P != nullptr) {
        P->info = x;  // Mengisi info dengan nilai x
        P->next = nullptr;  // Elemen baru belum terhubung ke elemen lain
    }
    return P;
}

// Dealokasi elemen
void dealokasi(address &P) {
    delete P;
    P = nullptr;
}

// Mencetak info dari seluruh elemen list
void printInfo(const List &L) {
    address P = L.first;
    while (P != nullptr) {
        cout << P->info << " ";  // Cetak info dari elemen
        P = P->next;  // Lanjut ke elemen berikutnya
    }
    cout << endl;
}

// Menyisipkan elemen di awal list
void insertFirst(List &L, address P) {
    P->next = L.first;  // Elemen baru menunjuk ke elemen pertama
    L.first = P;  // Elemen pertama sekarang adalah elemen baru
}
