//1 membuat adt linklist
#ifndef SINGLELIST_H
#define SINGLELIST_H

typedef int infotype;
typedef struct ElmList* address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);
address findElm(List L, infotype x); //2 deklarasi fungsi mencari elemen 8
int sumInfo(List L); //3 deklarasi fungsi untuk menjumlahkan seluruh info elemen

#endif