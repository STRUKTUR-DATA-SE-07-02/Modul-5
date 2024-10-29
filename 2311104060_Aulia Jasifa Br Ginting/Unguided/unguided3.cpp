#include <iostream>
using namespace std;

// Fungsi untuk mencari elemen dalam list
bool findElem(int list[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (list[i] == x) {
            return true; // Mengembalikan true jika elemen ditemukan
        }
    }
    return false; // Mengembalikan false jika elemen tidak ditemukan
}

int main() {
    // Deklarasi list elemen
    int list[] = {9, 12, 8, 0, 2};
    int size = sizeof(list) / sizeof(list[0]);
    int x = 8; // Elemen yang akan dicari

    // Memanggil fungsi findElem dan menampilkan hasilnya
    if (findElem(list, size, x)) {
        cout << x << " ditemukan dalam list" << endl;
    } else {
        cout << x << " tidak ditemukan dalam list" << endl;
    }

    return 0;
}
