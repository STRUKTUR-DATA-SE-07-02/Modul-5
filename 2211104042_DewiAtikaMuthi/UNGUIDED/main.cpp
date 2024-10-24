// singlelist.h
#ifndef SINGLELIST_H
#define SINGLELIST_H
#include <iostream>

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

// Operasi Basic
void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

// Operasi tambahan untuk search
address findElm(List L, infotype x);

// Operasi tambahan untuk mentotal jumlah
int sumInfo(List L);


#endif

// singlelist.cpp
#include "singlelist.h"
#include <iostream>
using namespace std;

void CreateList(List &L) {
    L.First = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = NULL;
}

void printInfo(List L) {
    address P = L.First;
    cout << "Isi List: ";
    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

// Soal 2: Mencari elemen dengan info spesifik
address findElm(List L, infotype x) {
    address P = L.First;
    while (P != NULL) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return NULL;
}

// Exercise 3: Menjumlah total semua elemen
int sumInfo(List L) {
    address P = L.First;
    int sum = 0;
    while (P != NULL) {
        sum += P->info;
        P = P->next;
    }
    return sum;
}



// main.cpp
#include "singlelist.h"
#include <iostream>
using namespace std;

int main() {
    List L;
    address P;

    // Membuat list dan memasukkan elemen
    CreateList(L);

    // Memasukkan elements: 9, 12, 8, 0, 2
    P = alokasi(2);
    insertFirst(L, P);
    P = alokasi(0);
    insertFirst(L, P);
    P = alokasi(8);
    insertFirst(L, P);
    P = alokasi(12);
    insertFirst(L, P);
    P = alokasi(9);
    insertFirst(L, P);

    // Soal 1: Display semua elemen
    cout << "\nSoal 2 - Display semua elemen - \n";
    printInfo(L);

    // Soal 2: Mencari Elemen 8
    cout << "\nSoal 2 - Mencari Elemen engan info 8" << endl;
    address found = findElm(L, 8);
    if (found != NULL) {
        cout << "Elemen 8 Ditemukan dalam lit" << endl;
    } else {
        cout << "Elemen 8 tidak ditemukan dalam list" << endl;
    }

    //Soal 3 - Total dari semua elemen
    cout << "\nSoal 3 - Total dari semua elemen" << endl;
    int total = sumInfo(L);
    cout << "Total jumlah dari semua elemen: " << total << endl;

    return 0;
}
