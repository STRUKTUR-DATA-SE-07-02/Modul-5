#include "singlelist.h"

int main() {
    List L;
    createList(&L);

    // Membuat dan menambahkan elemen ke dalam list
    address P1 = alokasi(2);
    insertFirst(&L, P1);

    address P2 = alokasi(0);
    insertFirst(&L, P2);

    address P3 = alokasi(8);
    insertFirst(&L, P3);

    address P4 = alokasi(12);
    insertFirst(&L, P4);

    address P5 = alokasi(9);
    insertFirst(&L, P5);
    printInfo(L);

    // Mencari elemen dengan nilai info 8
    infotype searchValue = 8;
    address found = findElm(L, searchValue);
    if (found != NULL) {
        printf("%d ditemukan di dalam list.\n", searchValue);
    } else {
        printf("%d tidak ditemukan di dalam list.\n", searchValue);
    }

    // Menghitung jumlah total info elemen dalam list
    int total = 0;
    address P = L.first;
    while (P != NULL) {
        total += P->info;
        P = P->next;
    }
    printf("Total info dari kelima elemen adalah: %d\n", total);


    return 0;
}
