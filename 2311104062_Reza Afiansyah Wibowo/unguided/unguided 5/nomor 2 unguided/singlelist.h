#ifndef SINGLELIST_H
#define SINGLELIST_H

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

void buatList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void cetakInfo(List L);
void sisipDepan(List &L, address P);

#endif
