#include <iostream>
#include "singlelist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5 = NULL;
    int pilihan;

    // Inisialisasi list
    createList(L);

    // Masukkan elemen-elemen ke dalam list
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

    // Menanyakan pilihan operasi kepada pengguna
    cout << "Pilih opsi:\n";
    cout << "1. Tampilkan elemen-elemen dalam list\n";
    cout << "2. Cari elemen dengan nilai info 8\n";
    cout << "3. Hitung total dari semua elemen\n";
    cout << "Masukkan pilihan Anda (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            // Menampilkan elemen-elemen dalam list
            cout << "Elemen dalam list: ";
            printInfo(L);
            break;

        case 2:
            // Mencari elemen dengan nilai info 8
            {
                address ditemukan = findElm(L, 8);
                if (ditemukan != NULL) {
                    cout << ditemukan->info << " ditemukan dalam list" << endl;
                } else {
                    cout << "Elemen tidak ditemukan" << endl;
                }
            }
            break;

        case 3:
            // Menghitung dan menampilkan total dari semua elemen
            int total;
            total = sumElements(L);
            cout << "Total info dari kelima elemen adalah " << total << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}
