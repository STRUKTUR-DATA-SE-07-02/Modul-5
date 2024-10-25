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