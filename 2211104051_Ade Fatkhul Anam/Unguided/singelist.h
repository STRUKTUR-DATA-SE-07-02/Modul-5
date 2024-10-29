#ifndef SINGLELIST_H
#define SINGLELIST_H

#include <iostream>

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

// Prosedur pembuatan list kosong
void createList(List &L);

// Fungsi alokasi elemen baru
address alokasi(infotype x);

// Prosedur dealokasi elemen
void dealokasi(address P);

// Prosedur untuk menampilkan info semua elemen dalam list
void printInfo(List L);

// Prosedur untuk menambahkan elemen di awal list
void insertFirst(List &L, address P);

// Fungsi untuk mencari elemen dengan info tertentu
address findElm(List L, infotype x);

// Fungsi untuk menghitung total info semua elemen
int totalInfo(List L);

#endif
