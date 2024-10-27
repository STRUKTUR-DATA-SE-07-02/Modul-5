//1
#include <iostream>
#include "singlelist.h"
using namespace std;

void CreateList(List &L) {
    L.First = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = NULL;
}

void printInfo(List L) {
    address P = L.First;
    while (P != NULL) {
        cout << P->info;
        if (P->next != NULL) {
            cout << " ";
        }
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

//2 implementasi fungsi mencari elemen
address findElm(List L, infotype x){
    address P = L.First;
    while (P != NULL && P->info != x){
        P = P->next;
    }
    return P;
}

//3 implementasi fungsi menjumlahkan seluruh info elemen  
int sumInfo(List L){
    int total = 0;
    address P = L.First;

    while (P != NULL){
        total += P->info;
        P = P->next;
    }
    return total;
}


int main() {
    List L;
    CreateList(L);
    
    address P1 = alokasi(2);
    insertFirst(L, P1);
    
    address P2 = alokasi(0);
    insertFirst(L, P2);
    
    address P3 = alokasi(8);
    insertFirst(L, P3);
    
    address P4 = alokasi(12);
    insertFirst(L, P4);
    
    address P5 = alokasi(9);
    insertFirst(L, P5);
    
    cout << "";
    printInfo(L);

    // 2 mencari elemen dengan info 8
    infotype x = 8;
    address found = findElm(L, x);
    if (found != NULL){
        cout << x << " ditemukan dalam list" << endl;
    } else {
        cout << x << " tidak ditemukan dalam list" << endl;
    }

    // 3 menghitung total info
    int total = sumInfo(L);
    cout << "Total info dari kelima elemen adalah " << total << endl;

    return 0;
}