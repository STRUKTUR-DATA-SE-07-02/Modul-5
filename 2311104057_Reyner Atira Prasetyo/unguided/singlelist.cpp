#include <iostream>
#include "singlelist.h"

using namespace std;


void createList(List &L){
    L.First = nullptr;
}

address alokasi(infotype x){
    address P = new ElmList;
    P->info = x;
    P->next = nullptr;
    return P;
}

void dealokasi(address &P){
    delete P;
    P = nullptr;
}

void printInfo(const List &L) {
    address P = L.First;
    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

address findElm(List L, infotype x){
    address P = L.First;
    while (P != nullptr)
    {
        if (P->info == x)
        {
            return P; //return alamat node jika ditemukan dan end function
        }
        P = P->next;    
    }
    return nullptr; //return null jika alamat node tidak ditemukan
}

int sumInfo(const List &L) {
    int sum = 0;
    address P = L.First;

    // loop melalui setiap node untuk menambahkan nilai info ke sum
    while (P != nullptr) {
        sum += P->info;
        P = P->next;
    }

    return sum;
}

void insertFirst(List &L, address P){
    P->next = L.First;
    L.First = P;   
}