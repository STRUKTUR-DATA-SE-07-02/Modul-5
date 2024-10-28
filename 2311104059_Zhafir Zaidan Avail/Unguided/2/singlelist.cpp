#include <iostream>
#include "singlelist.h"
using namespace std;

// Initialize an empty list
void createList(List& L) {
    L.first = nullptr;
}

// Allocate a new node with the given value
address alokasi(infotype x) {
    address P = new ElmtList;
    if (P != nullptr) {
        P->info = x;
        P->next = nullptr;
    }
    return P;
}

// Deallocate memory of a node
void dealokasi(address& P) {
    delete P;
    P = nullptr;
}

// Insert a new node at the beginning of the list
void insertFirst(List& L, address P) {
    if (P != nullptr) {
        P->next = L.first;
        L.first = P;
    }
}

// Print all elements in the list
void printInfo(const List& L) {
    address P = L.first;
    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// Find an element with the given value
address findElm(const List& L, infotype x) {
    address P = L.first;
    while (P != nullptr) {
        if (P->info == x) {
            return P; // Elemen ditemukan
        }
        P = P->next;
    }
    return nullptr; // Elemen tidak ditemukan
}
