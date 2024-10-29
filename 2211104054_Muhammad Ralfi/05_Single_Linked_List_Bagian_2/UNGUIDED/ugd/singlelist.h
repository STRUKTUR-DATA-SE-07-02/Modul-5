#ifndef SINGLELIST_H
#define SINGLELIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

// Deklarasi fungsi
void createList(List *L);
address alokasi(infotype x);
void dealokasi(address P);
void insertFirst(List *L, address P);
void printInfo(List L);
address findElm(List L, infotype x);

#endif
