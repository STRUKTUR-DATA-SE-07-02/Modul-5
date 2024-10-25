#include "singlelist.h"
#include <iostream>
using namespace std;

void createList(List &L) {
    L.First = nullptr;
}
address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = nullptr;
    return P;
}
void dealokasi(address &P) {
    delete P;
    P = nullptr;
}
void printInfo(const List &L) {
    address P = L.First;
    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}
void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

address findElm(const List &L, infotype x) {
    address P = L.First;
    while (P != nullptr) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return nullptr;
}

int sumInfo(const List &L) {
    address P = L.First;
    int total = 0;
    while (P != nullptr) {
        total += P->info;
        P = P->next;
    }
    return total;
}


