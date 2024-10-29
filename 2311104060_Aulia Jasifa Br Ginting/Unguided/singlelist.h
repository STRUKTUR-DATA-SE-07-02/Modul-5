#ifndef SINGLELIST_H
#define SINGLELIST_H

struct elmlist {
    int info;
    elmlist* next;
};

typedef elmlist* address;
typedef struct {
    address first;
} List;

void createList(List& L);
address alokasi(int x);
void insertFirst(List& L, address P);
void deleteFirst(List& L, address& P);
void printInfo(List L);
void insertAfter(List& L, address& prev, address& P);

#endif