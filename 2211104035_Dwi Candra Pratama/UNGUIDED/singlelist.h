// singlelist.h
#ifndef SINGLELIST_H
#define SINGLELIST_H

#include <iostream>
using namespace std;

typedef int infotype; // Tipe data untuk info
typedef struct ElmList* address; // Pointer ke ElmList

struct ElmList {
    infotype info;  // Data di dalam node
    address next;   // Pointer ke node berikutnya
};

struct List {
    address First;  // Pointer ke node pertama di dalam list
};

// Prototipe fungsi
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address P);
void insertFirst(List &L, address P);
void printInfo(List L);

// Deklarasi untuk fungsi baru
address findElm(List L, infotype x);
int sumList(List L);

#endif
