#include "singlelist.h"

void createList(List &L) {
    L.First = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
    }
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = NULL;
}

void insertFirst(List &L, address P) {
    if (L.First == NULL) {
        L.First = P;
    } else {
        P->next = L.First;
        L.First = P;
    }
}

void printInfo(const List &L) {
    address P = L.First;
    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
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
    int sum = 0;
    while (P != nullptr) {
        sum += P->info;
        P = P->next;
    }
    return sum;
}
