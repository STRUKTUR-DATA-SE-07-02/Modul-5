#include <iostream>
using namespace std;

int main() {
    int elements[] = {9, 12, 8, 0, 2}; // Array of elements
    int total = 0;

    // Calculate the sum of all elements
    for (int i = 0; i < 5; i++) {
        total += elements[i];
    }

    // Print the total sum
    cout << "Total info dari kelima elemen adalah " << total << endl;

    return 0;
}
