#include <iostream>
#include "singlelist.h"
using namespace std;

void createList(List& L) {
    L.first = nullptr;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = nullptr;
    return P;
}

void deAlokasi(address& P) {
    delete P;
    P = nullptr;
}

void printInfo(List L) {
    address P = L.first;
    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List& L, address P) {
    P->next = L.first;
    L.first = P;
}

address findElm(List L, infotype x) {
    address P = L.first;
    while (P != nullptr) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return nullptr;
}

int totalInfo(List L) {
    int total = 0;
    address P = L.first;
    while (P != nullptr) {
        total += P->info;
        P = P->next;
    }
    return total;
}

// Main 
int main() {
    List L;
    address P1, P2, P3, P4, P5 = nullptr;
    createList(L);

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

//  Jawaban soal no 1
    cout << "List elements: ";
    printInfo(L);

    // Jawaban Soal No 2
    infotype x = 8;
    address found = findElm(L, x);
    if (found != nullptr) {
        cout << x << " ditemukan dalam list" << endl;
    } else {
        cout << x << " tidak ditemukan dalam list" << endl;
    }

    // Jawaban Soal No 3
    int total = totalInfo(L);
    cout << "Total info dari kelima elemen adalah " << total << endl;

    return 0;
}