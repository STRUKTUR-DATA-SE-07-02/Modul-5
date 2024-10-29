#include "singlelist.h"
#include <iostream>
using namespace std;

void createList(List& L) {
    L.first = NULL;
}

address alokasi(int x) {
    address P = new elmlist;
    P->info = x;
    P->next = NULL;
    return P;
}

void insertFirst(List& L, address P) {
    P->next = L.first;
    L.first = P;
}

void deleteFirst(List& L, address& P) {
    if (L.first != NULL) {
        P = L.first;
        L.first = L.first->next;
        P->next = NULL;
    }
}

void printInfo(List L) {
    address P = L.first;
    cout << "List: ";
    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertAfter(List& L, address& prev, address& P) {
    P->next = prev->next;
    prev->next = P;
}