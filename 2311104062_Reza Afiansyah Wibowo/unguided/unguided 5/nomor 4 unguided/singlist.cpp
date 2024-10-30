#include "singlelist.h"
#include <iostream>
using namespace std;

void CreateList(List &L)
{
    L.first = NULL;
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
}

void printInfo(List L)
{
    address P = L.first;
    while (P != NULL)
    {
        cout << P->info;
        if (P->next != NULL)
        {
            cout << " ";
        }
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P)
{
    P->next = L.first;
    L.first = P;
}

address findElm(List L, infotype x)
{
    address P = L.first;
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

// Fungsi baru untuk menghitung total
int sumInfo(List L)
{
    int total = 0;
    address P = L.first;
    while (P != NULL)
    {
        total += P->info;
        P = P->next;
    }
    return total;
}
