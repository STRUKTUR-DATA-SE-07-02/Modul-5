#ifndef SINGLELIST_H
#define SINGLELIST_H
#include <iostream>

typedef int infotype;
typedef struct ElmList *address;

struct ElmList
{
    infotype info;
    address next;
};

struct List
{
    address First;
};

// Basic operations
void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

// Additional operations for the exercises
address findElm(List L, infotype x);
int sumInfo(List L);
address findMax(List L);
address findMin(List L);

#endif