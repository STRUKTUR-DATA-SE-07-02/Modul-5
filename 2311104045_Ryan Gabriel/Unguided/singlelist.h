#ifndef SINGLELIST_H
#define SINGLELIST_H

typedef int infotype;

struct ElmList {
    infotype info;
    ElmList* next;
};

typedef ElmList* address;

struct List {
    address first;
};

void createList(List& L);
address alokasi(infotype x);
void insertFirst(List& L, address P);
void printInfo(List L);

#endif