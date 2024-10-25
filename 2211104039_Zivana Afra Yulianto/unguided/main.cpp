// singlelist.h
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

// singlelist.cpp
#include "singlelist.h"
#include <iostream>
using namespace std;

void CreateList(List &L)
{
    L.First = NULL;
}

address alokasi(infotype x)
{
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    return P;
}

void dealokasi(address &P)
{
    delete P;
    P = NULL;
}

void printInfo(List L)
{
    address P = L.First;
    cout << "Isi List: ";
    while (P != NULL)
    {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P)
{
    P->next = L.First;
    L.First = P;
}

// Exercise 3: Find element with specific info
address findElm(List L, infotype x)
{
    address P = L.First;
    while (P != NULL)
    {
        if (P->info == x)
        {
            return P;
        }
        P = P->next;
    }
    return NULL;
}

// Exercise 4: Calculate sum of all info
int sumInfo(List L)
{
    address P = L.First;
    int sum = 0;
    while (P != NULL)
    {
        sum += P->info;
        P = P->next;
    }
    return sum;
}

// Additional helper functions
address findMax(List L)
{
    if (L.First == NULL)
        return NULL;

    address P = L.First;
    address maxAddr = P;

    while (P != NULL)
    {
        if (P->info > maxAddr->info)
        {
            maxAddr = P;
        }
        P = P->next;
    }
    return maxAddr;
}

address findMin(List L)
{
    if (L.First == NULL)
        return NULL;

    address P = L.First;
    address minAddr = P;

    while (P != NULL)
    {
        if (P->info < minAddr->info)
        {
            minAddr = P;
        }
        P = P->next;
    }
    return minAddr;
}

// main.cpp
#include "singlelist.h"
#include <iostream>
using namespace std;

int main()
{
    List L;
    address P;

    // Create list and insert elements as per exercise requirements
    CreateList(L);

    // Insert elements: 9, 12, 8, 0, 2
    P = alokasi(2);
    insertFirst(L, P);
    P = alokasi(0);
    insertFirst(L, P);
    P = alokasi(8);
    insertFirst(L, P);
    P = alokasi(12);
    insertFirst(L, P);
    P = alokasi(9);
    insertFirst(L, P);


    // NOMOR 1
    cout << "\n";
    printInfo(L);

    // NOMOR 2
    cout << "\nMencari angka 8" << endl;
    address found = findElm(L, 8);
    if (found != NULL)
    {
        cout << "Elemen 8 ditemukan didalam list" << endl;
    }
    else
    {
        cout << "Elemen 8 tidak ditemukan dalam list" << endl;
    }

    // NOMOR 3
    cout << "\nMenghitung total info seluruh elemen" << endl;
    int total = sumInfo(L);
    cout << "TJumlah total semua elemen adalah : " << total << endl;


    // Clean up
    while (L.First != NULL)
    {
        P = L.First;
        L.First = L.First->next;
        dealokasi(P);
    }

    return 0;
}