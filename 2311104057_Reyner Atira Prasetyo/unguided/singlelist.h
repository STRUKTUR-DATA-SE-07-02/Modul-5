#ifndef SINGLELIST_H
#define SINGLELIST_H

// define types
typedef int infotype;
typedef struct ElmList* address;

// define structure for ElmList / node
struct ElmList
{
    infotype info;
    address next;
};

// define structure for List
struct List
{
    address First;
};


void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(const List &L);
void insertFirst(List &L, address P);
address findElm(List L, infotype x);
int sumInfo(const List &L);


#endif