#include <iostream>
#include "singlelist(no.3).h"


using namespace std;

// Membuat list kosong
void createList(List &L) {
    L.First = NULL;
}

// Mengalokasikan elemen baru
address alokasi(infotype x) {
    address P = new ElmList;
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
    }
    return P;
}

// Dealokasi atau menghapus elemen
void dealokasi(address &P) {
    delete P;
    P = NULL;
}

// Menampilkan informasi elemen di dalam list
void printInfo(const List &L) {
    address P = L.First;
    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// Menambahkan elemen di awal list
void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

// Menjumlahkan seluruh elemen dalam list
int sumInfo(const List &L) {
    address P = L.First;
    int total = 0;
    while (P != NULL) {
        total += P->info;  // Menambahkan nilai elemen
        P = P->next;
    }
    return total;  // Mengembalikan hasil penjumlahan
}
