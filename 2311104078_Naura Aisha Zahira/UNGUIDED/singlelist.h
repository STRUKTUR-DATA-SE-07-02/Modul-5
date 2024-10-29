#ifndef SINGLELIST_H
#define SINGLELIST_H

typedef int infotype;

struct ElmtList {
    infotype info;
    ElmtList* next;
};

typedef ElmtList* address;

struct List {
    address first;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(const List &L);
void insertFirst(List &L, address P);
address findElm(const List &L, infotype x);
int sumInfo(const List &L);

#endif
