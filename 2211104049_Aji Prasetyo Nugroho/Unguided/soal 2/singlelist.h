#ifndef SINGLELIST_H
#define SINGLELIST_H

typedef int infotype;
typedef struct ElmtList *address;

struct ElmtList {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L);
address alokasi(infotype x);
void insertFirst(List &L, address P);
void printInfo(List L);
address findElm(List L, infotype x); // Add this line

#endif
