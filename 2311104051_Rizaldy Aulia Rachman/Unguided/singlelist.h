#ifndef SINGLELIST_H
#define SINGLELIST_H

// Definisikan infotype sebagai int dan address sebagai pointer ke ElmList
typedef int infotype;
typedef struct ElmList *address;

// Definisikan struktur untuk setiap elemen (node)
struct ElmList {
    infotype info;    // Menyimpan nilai dari node
    address next;     // Pointer ke node berikutnya
};

// Definisikan struktur untuk List
struct List {
    address First;    // Menunjuk ke node pertama dalam list
};

// Deklarasi fungsi dan prosedur
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(const List &L);
void insertFirst(List &L, address P);
address findElm(const List &L, infotype x);
int totalInfo(const List &L);

#endif
