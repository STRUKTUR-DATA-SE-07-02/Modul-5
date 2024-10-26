#include "singlelist.h"

// Membuat list dengan mengatur node pertama menjadi NULL
void createList(List &L) {
    L.First = NULL;
}

// Mengalokasikan memori untuk node baru dan mengisi infonya
address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    return P;
}

// Mendekalokasi memori dari node
void dealokasi(address P) {
    delete P;
}

// Menyisipkan node di awal list
void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

// Mencetak semua elemen dalam list
void printInfo(List L) {
    address P = L.First;
    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// Fungsi untuk mencari elemen dengan nilai tertentu
address findElm(List L, infotype x) {
    address P = L.First;
    while (P != NULL) {
        if (P->info == x) {
            return P;  // Mengembalikan node jika ditemukan
        }
        P = P->next;
    }
    return NULL;  // Mengembalikan NULL jika tidak ditemukan
}

// Fungsi untuk menghitung total dari semua elemen di dalam list
int sumList(List L) {
    int total = 0;
    address P = L.First;
    while (P != NULL) {
        total += P->info;
        P = P->next;
    }
    return total;
}
