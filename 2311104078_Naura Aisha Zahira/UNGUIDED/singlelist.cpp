#include <iostream>
#include "singlelist.h"
using namespace std;

void createList(List &L) {
    L.first = nullptr;
}

address alokasi(infotype x) {
    address P = new ElmtList;
    P->info = x;
    P->next = nullptr;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = nullptr;
}

void printInfo(const List &L) {
    address P = L.first;
    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

address findElm(const List &L, infotype x) {
    address P = L.first;
    while (P != nullptr) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return nullptr;
}

int sumInfo(const List &L) {
    address P = L.first;
    int sum = 0;
    while (P != nullptr) {
        sum += P->info;
        P = P->next;
    }
    return sum;
}
