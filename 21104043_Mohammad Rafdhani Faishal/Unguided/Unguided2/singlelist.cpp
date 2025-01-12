#include "singlelist.h"

void createList(List &L) {
    L.first = nullptr;  
}

address alokasi(infotype x) {
    address P = new elmlist;  
    if (P != nullptr) {
        P->info = x;  
        P->next = nullptr;  
    }
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