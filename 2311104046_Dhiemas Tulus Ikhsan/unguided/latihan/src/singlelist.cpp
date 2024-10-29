#include <iostream>
#include "singlelist.h"

using namespace std;

// Create an empty list
void createList(List &L) {
    L.First = NULL;
}

// Allocate a new element
address alokasi(infotype x) {
    address P = new tElmtList;
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
    }
    return P;
}

// Deallocate a node
void dealokasi(address P) {
    delete P;
}

// Insert an element at the beginning of the list
void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

// Print all elements in the list
void printInfo(List L) {
    address P = L.First;
    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// Find an element in the list
address findElm(List L, infotype x) {
    address P = L.First;
    while (P != NULL) {
        if (P->info == x) {
            return P; // Element found
        }
        P = P->next;
    }
    return NULL; // Element not found
}

// Sum the info values of all elements in the list
int sumElements(List L) {
    address P = L.First;
    int sum = 0;
    while (P != NULL) {
        sum += P->info;
        P = P->next;
    }
    return sum;
}
