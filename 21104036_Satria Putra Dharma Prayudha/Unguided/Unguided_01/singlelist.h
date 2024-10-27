#ifndef SINGLELIST_H
#define SINGLELIST_H

#include <iostream>
using namespace std;

typedef int infotype;  // Tipe data info
typedef struct elmlist *address;  // Alamat dari elemen dalam linked list

// Struktur elemen dari Single Linked List
struct elmlist {
    infotype info;
    address next;
};

// Struktur list
struct List {
    address first;  // Elemen pertama dari list
};

// Deklarasi fungsi-fungsi dasar untuk operasi pada Single Linked List
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(const List &L);
void insertFirst(List &L, address P);

#endif
