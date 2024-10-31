#include "singlelist2.h"

// Implementasi fungsi createList
void createList(List &L) {
    L.first = nullptr; // Inisialisasi list kosong
}

// Implementasi fungsi alokasi
address alokasi(int x) {
    address P = new Node;
    P->info = x;
    P->next = nullptr;
    return P;
}

// Implementasi fungsi insertFirst
void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

// Implementasi fungsi printInfo
void printInfo(const List &L) {
    address P = L.first;
    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}
