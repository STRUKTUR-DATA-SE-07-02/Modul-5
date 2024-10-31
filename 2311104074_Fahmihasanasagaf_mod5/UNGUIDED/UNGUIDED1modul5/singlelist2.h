#ifndef SINGLELIST2_H
#define SINGLELIST2_H

#include <iostream>
using namespace std;

struct Node {
    int info;
    Node* next;
};

typedef Node* address;

struct List {
    address first;
};

// Fungsi untuk membuat list baru
void createList(List &L) {
    L.first = nullptr;
}

// Fungsi untuk mengalokasikan node baru
address alokasi(int x) {
    address P = new Node;
    P->info = x;
    P->next = nullptr;
    return P;
}

// Fungsi untuk menambahkan elemen di awal list
void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

// Fungsi untuk mencetak isi list
void printInfo(List L) {
    address P = L.first;
    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

#endif // SINGLELIST2_H
