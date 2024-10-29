#include <iostream>
#include "singlelist.h"

using namespace std;

// Membuat list kosong
void createlist(List &L) {
    L.First = nullptr;
}

// mengalokasikan node  baru dengan nilai info tertentu
address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = nullptr;
    return P;
}

// Dealokasi atau membebaskan memori dari node
void dealokasi(address &P) {
    delete P;
    P = nullptr;
}

// Menampilkan info dari semua elemen dalam list
void printInfo(const List &L) {
    address P = L.First;
    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// Menyisipkan node baru di awal list
void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

// Mencari Elemen dengan nilai tertentu
address findElm(const List &L, infotype x) {
    address P = L.First;
    while (P != nullptr && P->info != x){
        P = P->next;
    }
    return P;
}

// Menghitung total info dari semua elemen
int totalInfo(const List &L) {
    int total = 0;
    address P = L.First;
    while (P != nullptr) {
        total += P->info;
        P = P->next;
    }
    return total;
}