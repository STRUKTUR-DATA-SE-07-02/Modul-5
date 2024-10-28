#include <iostream>
using namespace std;

int main() {
    // Daftar angka
    int daftar_angka[5] = {5, 6, 7, 3, 10};
    int total = 0;

    // Menghitung total dari lima elemen
    for (int i = 0; i < 5; i++) {
        total += daftar_angka[i];
    }

    // Menampilkan hasil
    cout << "Total info dari kelima elemen adalah " << total << endl;

    return 0;
}
