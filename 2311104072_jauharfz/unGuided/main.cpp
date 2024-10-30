#include "singlelist.h"

int main() {
    List L;
    address P1, P2, P3, P4, P5 = NULL;

    CreateList(L);

    P1 = alokasi(2);
    insertFirst(L,P1);

    P2 = alokasi(0);
    insertFirst(L,P2);

    P3 = alokasi(8);
    insertFirst(L,P3);

    P4 = alokasi(12);
    insertFirst(L,P4);

    P5 = alokasi(9);
    insertFirst(L,P5);

    printf("Isi list: ");
    printInfo(L);

    // Mencari elemen dengan info 8
    address found = findElm(L, 8);
    if(found != NULL) {
        printf("Elemen dengan info 8 ditemukan\n");
    } else {
        printf("Elemen dengan info 8 tidak ditemukan\n");
    }

    // Menghitung total info
    int total = sumInfo(L);
    printf("Total info seluruh elemen: %d\n", total);

    return 0;
}
