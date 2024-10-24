#include <iostream>

using namespace std;

typedef int infotype;
typedef struct ElmtList *address;

struct ElmtList {
    infotype info;
    address next;
};

struct List {
    address first;
};

// Deklarasi prosedur dan fungsi
void createList(List &L) {
    L.first = nullptr;
}

// Mengalokasikan node baru
address alokasi(infotype x) {
    address P = new ElmtList;
    P->info = x;
    P->next = nullptr;
    return P;
}

// Mengdealokasi node
void dealokasi(address P) {
    delete P;
}

// Menampilkan semua elemen list
void printInfo(const List &L) {
    address P = L.first;
    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// Menyisipkan elemen di awal list
void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

int main() {
    List L;
    address P1, P2, P3, P4, P5 = nullptr;

    // Membuat list kosong
    createList(L);

    // Alokasi node dan insert di awal
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

    // Cetak isi list
    cout << "Elemen dalam LinkedList: ";
    printInfo(L);

    return 0;
}
