#include "singlelist.h"

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
    while(P != NULL) {
        printf("%d ", P->info);
        P = P->next;
    }
    printf("\n");
}

void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

address findElm(List L, infotype x) {
    address P = L.First;
    while(P != NULL) {
        if(P->info == x) {
            return P;
        }
        P = P->next;
    }
    return NULL;
}

int sumInfo(List L) {
    int sum = 0;
    address P = L.First;
    while(P != NULL) {
        sum += P->info;
        P = P->next;
    }
    return sum;
}