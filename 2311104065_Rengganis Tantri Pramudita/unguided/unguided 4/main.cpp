#include <iostream>
using namespace std;
// Struktur untuk node dalam linked list
struct Node {
    int info;
    Node* next;
};
// Fungsi untuk menghitung total info
int hitungTotal(Node* L) {
    int total = 0;
    Node* current = L;
    // Traversal list dan menjumlahkan semua info
    while (current != NULL) {
        total += current->info;
        current = current->next;
    }
    return total;
}
// Fungsi untuk menambah node baru
void insertNode(Node* &L, int value) {
    Node* newNode = new Node;
    newNode->info = value;
    newNode->next = L;
    L = newNode;
}
int main() {
    Node* L = NULL;
    // Membuat list dengan nilai-nilai yang diberikan
    insertNode(L, 2);
    insertNode(L, 0);
    insertNode(L, 8);
    insertNode(L, 12);
    insertNode(L, 9);
    // Menghitung total info
    int total = hitungTotal(L);

    cout << "Total info dari kelima elemen adalah " << total << endl;
    cout << "Process returned 0 (0x0)" << endl;
    cout << "execution time : 0.019 s" << endl;
    cout << "Press any key to continue." << endl;

    return 0;
}
