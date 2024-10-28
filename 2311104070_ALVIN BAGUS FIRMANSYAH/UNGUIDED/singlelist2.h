#ifndef SINGLELIST_H_INCLUDED
#define SINGLELIST_H_INCLUDED

// Deklarasi tipe data
typedef int infotype;
typedef struct ElmtList *address;

struct ElmtList {
    infotype info;
    address next;
};

struct List {
    address First;
};

// Deklarasi prosedur dan fungsi
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

#endif // SINGLELIST_H_INCLUDED
