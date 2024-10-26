#include "singlelist.h"
#include "singlelist.cpp"

int main() {
    List L;
    address P1, P2, P3, P4, P5 = NULL;

    createList(L);

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

    // Mencetak elemen-elemen dalam list
    printInfo(L); // Output: 9 12 8 0 2

    // Mencari elemen dengan nilai 8
    address found = findElm(L, 8);
    if (found != NULL) {
        cout << found->info << " ditemukan dalam list" << endl; // Output: 8 ditemukan dalam list
    } else {
        cout << "Elemen tidak ditemukan" << endl;
    }

    // Menghitung total elemen dalam list
    int totalSum = sumList(L);
    cout << "Total info dari kelima elemen adalah " << totalSum << endl; // Output: Total info dari kelima elemen adalah 31

    return 0;
}
