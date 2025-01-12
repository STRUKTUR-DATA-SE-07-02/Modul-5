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


void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(const List &L);
void insertFirst(List &L, address P);
address findElm(const List &L, infotype x);

#endif