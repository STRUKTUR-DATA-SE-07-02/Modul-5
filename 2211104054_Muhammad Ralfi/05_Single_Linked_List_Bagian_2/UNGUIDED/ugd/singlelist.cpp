#include "singlelist.h"

void createList(List *L) {
    L->first = NULL;
}

address alokasi(infotype x) {
    address P = (address)malloc(sizeof(struct elmlist));
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
    }
    return P;
}

void dealokasi(address P) {
    free(P);
}

void insertFirst(List *L, address P) {
    P->next = L->first;
    L->first = P;
}

address findElm(List L, infotype x) {
    address P = L.first;
    while (P != NULL) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return NULL;
}

void printInfo(List L) {
    address P = L.first;
    while (P != NULL) {
        printf("%d", P->info);
        P = P->next;
        if (P != NULL) {
            printf(" ");
        }
    }
    printf("\n");
}
