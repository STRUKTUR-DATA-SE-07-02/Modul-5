#include <iostream>
#include "singlelist.h"

using namespace std;

// Prosedur untuk membuat list kosong
void createList(List &L) {
    L.First = NULL;
}

// Fungsi untuk mengalokasi node baru dengan nilai x
address alokasi(infotype x) {
    address P = new ElmList;
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
    }
    return P;
}

// Prosedur untuk mendealokasi node
void dealokasi(address &P) {
    delete P;
    P = NULL;
}

// Prosedur untuk mencetak info dari list
void printInfo(const List &L) {
    address P = L.First;
    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// Prosedur untuk menyisipkan node di awal list
void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}
