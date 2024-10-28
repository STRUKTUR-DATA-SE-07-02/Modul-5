#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Daftar angka
    vector<int> daftar_angka = {2, 5, 8, 10, 8, 7, 6};
    int angka_dicari = 8;
    bool ditemukan = false;

    // Pencarian angka
    for (int angka : daftar_angka) {
        if (angka == angka_dicari) {
            ditemukan = true;
            break;
        }
    }

    if (ditemukan) {
        cout << angka_dicari << " ditemukan dalam list" << endl;
    } else {
        cout << angka_dicari << " tidak ditemukan dalam list" << endl;
    }

    return 0;
}
