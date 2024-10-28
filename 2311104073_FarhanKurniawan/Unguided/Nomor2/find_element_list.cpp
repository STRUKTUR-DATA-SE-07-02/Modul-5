#include <iostream>
#include <vector>

using namespace std;

// Asumsikan infotype adalah integer
int findElm(const vector<int>& L, int x) {
    // Menggunakan algoritma pencarian linear
    for (int i = 0; i < L.size(); ++i) {
        if (L[i] == x) {
            return i; // Mengembalikan indeks jika ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika tidak ditemukan
}

int main() {
    vector<int> myList = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 6, 4, 3, 3, 8, 3, 2, 7, 9, 5};
    int target = 8;

    int result = findElm(myList, target);

    if (result != -1) {
        cout << target << " ditemukan dalam list" << endl;
    } else {
        cout << target << " tidak ditemukan dalam list" << endl;
    }

    return 0;
}