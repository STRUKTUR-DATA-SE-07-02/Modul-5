#ifndef SINGLELIST_H
#define SINGLELIST_H

struct ElmList;
typedef ElmList* address;
typedef int infotype;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

// Function prototypes
void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);
address findElm(List L, infotype x);
// Fungsi baru untuk menghitung total
int sumInfo(List L);  // Tambahan fungsi baru

#endif
