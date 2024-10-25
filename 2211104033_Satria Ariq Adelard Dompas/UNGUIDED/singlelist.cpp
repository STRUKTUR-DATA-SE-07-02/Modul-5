#include "singlelist.h"

// Prosedur pembuatan list kosong
void createList(List &L) {
    L.first = NULL;
}

// Fungsi alokasi elemen baru
address alokasi(infotype x) {
    address P = new elmlist;
    P->info = x;
    P->next = NULL;
    return P;
}

// Prosedur dealokasi elemen
void dealokasi(address P) {
    delete P;
}

// Prosedur untuk menampilkan info semua elemen dalam list
void printInfo(List L) {
    address P = L.first;
    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// Prosedur untuk menambahkan elemen di awal list
void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

// Fungsi untuk mencari elemen dengan info tertentu
address findElm(List L, infotype x) {
    address P = L.first;
    while (P != NULL) {
        if (P->info == x)
            return P;
        P = P->next;
    }
    return NULL; // Jika tidak ditemukan
}

// Fungsi untuk menghitung total info semua elemen
int totalInfo(List L) {
    address P = L.first;
    int total = 0;
    while (P != NULL) {
        total += P->info;
        P = P->next;
    }
    return total;
}