#ifndef SINGLELIST_H
#define SINGLELIST_H

typedef int infotype;
typedef struct ElmtList* address;

struct ElmtList {
    infotype info;
    address next;
};

struct List {
    address first;
};

// Function prototypes
void createList(List& L);
address alokasi(infotype x);
void dealokasi(address& P);
void insertFirst(List& L, address P);
void printInfo(const List& L);
address findElm(const List& L, infotype x);
int sumInfo(const List& L);  // Fungsi baru untuk menghitung jumlah total info

#endif
