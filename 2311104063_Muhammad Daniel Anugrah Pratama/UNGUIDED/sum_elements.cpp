#include <iostream>
#include <cstdlib>

using namespace std;

// Definisi tipe data
typedef int infotype;
typedef struct tElmtList *address;

struct tElmtList {
    infotype info;
    address next;
};

struct List {
    address First;
};

// Fungsi untuk membuat list kosong
void CreateList(List &L) {
    L.First = NULL;
}

// Fungsi alokasi untuk membuat elemen baru
address alokasi(infotype X) {
    address P = (address)malloc(sizeof(tElmtList));
    if (P != NULL) {
        P->info = X;
        P->next = NULL;
    }
    return P;
}

// Fungsi untuk menyisipkan elemen di awal list
void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

// Fungsi untuk menghitung jumlah total info dari seluruh elemen dalam list
int sumInfo(List L) {
    int total = 0;
    address P = L.First;
    while (P != NULL) {
        total += P->info;
        P = P->next;
    }
    return total;
}

int main() {
    List L;
    address P1, P2, P3, P4, P5;

    // Membuat list kosong
    CreateList(L);

    // Alokasi dan penyisipan elemen
    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    // Menghitung total info dari seluruh elemen
    int total = sumInfo(L);

    // Cetak total info
    cout << "total info dari kelima elemen adalah " << total << endl;

    return 0;
}
