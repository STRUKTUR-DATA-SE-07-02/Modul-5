#include <iostream>
using namespace std;

// Struktur data untuk elemen list
struct ElmList {
    int info;
    ElmList *next;
};

// Struktur data untuk list
struct List {
    ElmList *First;
};

// Fungsi alokasi untuk membuat elemen list baru
ElmList* alokasi(int x) {
    ElmList *P = new ElmList;
    if (P != NULL) {
        P->info = x;
        P->next = NULL;
        return P;
    } else {
        return NULL;
    }
}

// Prosedur untuk dealokasi elemen list
void dealokasi(ElmList *&P) {
    delete P;
    P = NULL;
}

// Prosedur untuk membuat list kosong
void CreateList(List &L) {
    L.First = NULL;
}

// Prosedur untuk menampilkan informasi list
void printInfo(List L) {
    ElmList *P = L.First;
    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// Prosedur untuk menambahkan elemen ke awal list
void insertFirst(List &L, int P) {
    ElmList *baru = alokasi(P);
    if (baru != NULL) {
        baru->next = L.First;
        L.First = baru;
    }
}

int main() {
    List L;
    CreateList(L);
    insertFirst(L, 2);
    insertFirst(L, 0);
    insertFirst(L, 8);
    insertFirst(L, 12);
    insertFirst(L, 9);

    printInfo(L);
    
    return 0;
}
