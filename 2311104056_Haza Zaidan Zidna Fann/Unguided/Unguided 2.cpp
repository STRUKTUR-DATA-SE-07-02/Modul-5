#include "singlelist.h"
// Fungsi untuk memeriksa apakah list kosong
bool ListEmpty(list L) {
    return (L.first == Nil);
}

// Fungsi untuk membuat list kosong
void CreateList(list &L) {
    L.first = Nil;
}

// Fungsi untuk alokasi elemen baru
address alokasi(infotype x) {
    address P = new elmlist;
    P->info = x;
    P->next = Nil;
    return P;
}

// Fungsi untuk mencari elemen dengan info tertentu
address findElm(list L, infotype X) {
    address P = L.first;
    while (P != Nil) {
        if (P->info == X) {
            return P; // Mengembalikan alamat elemen jika ditemukan
        }
        P = P->next;
    }
    return Nil; // Mengembalikan Nil jika tidak ditemukan
}

// Fungsi untuk menghitung total nilai info dari semua elemen
int sumInfo(list L) {
    int sum = 0;
    address P = L.first;
    while (P != Nil) {
        sum += P->info;
        P = P->next;
    }
    return sum;
}

// Fungsi untuk menambah elemen di awal list
void insertFirst(list &L, address P) {
    P->next = L.first;
    L.first = P;
}

// Fungsi untuk mencetak semua elemen
void printInfo(list L) {
    address P = L.first;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}