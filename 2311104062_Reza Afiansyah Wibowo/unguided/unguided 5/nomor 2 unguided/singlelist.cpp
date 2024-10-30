#include "singlelist.h"
#include <iostream>
using namespace std;

void buatList(List &L) {
    L.first = NULL;
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

void cetakInfo(List L) {
    address P = L.first;
    while (P != NULL) {
        cout << P->info;
        if (P->next != NULL) {
            cout << " -> ";
        }
        P = P->next;
    }
    cout << endl;
}

void sisipDepan(List &L, address P) {
    P->next = L.first;
    L.first = P;
}
