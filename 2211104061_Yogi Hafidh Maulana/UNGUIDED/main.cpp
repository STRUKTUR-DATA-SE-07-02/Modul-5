#include "singlelist.h"

int main()
{
    List L;
    address P1, P2, P3, P4, P5 = NULL;

    // Create an empty list
    createList(L);

    // Allocate and insert elements into the list as per the given sequence
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

    // Print the list elements
    printInfo(L);

    // Find element with info 8
    address found = findElm(L, 8);
    if (found != nullptr)
    {
        cout << found->info << " ditemukan dalam list" << endl; // Output: 8 ditemukan dalam list
    }
    else
    {
        cout << "Elemen tidak ditemukan" << endl;
    }

    // Hitung total info dari semua elemen
    int total = sumInfo(L);
    cout << "Total info dari kelima elemen adalah " << total << endl; // Output: 31

    return 0;
}
