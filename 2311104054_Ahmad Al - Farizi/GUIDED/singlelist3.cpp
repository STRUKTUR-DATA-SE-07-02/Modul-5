#include <iostream>
#include "singlelist3.h"

using namespace std;

void createList(List &L) {
    L.First = NULL;
}


address alokasi(infotype x) {
    address P = new ElmtList;
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

int sumInfo(List L) {
   int sum = 0;
   address P = L.First;
   while (P != NULL) {
       sum += P->info;
       P = P->next;
   }
   return sum;
}
