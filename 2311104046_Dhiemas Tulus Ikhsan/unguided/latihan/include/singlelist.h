#ifndef SINGLELIST_H
#define SINGLELIST_H

typedef int infotype;
typedef struct tElmtList *address;

struct tElmtList {
    infotype info;
    address next;
};

struct List {
    address First;
};

// Function prototypes
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address P);
void insertFirst(List &L, address P);
void printInfo(List L);
address findElm(List L, infotype x);
int sumElements(List L);

#endif
