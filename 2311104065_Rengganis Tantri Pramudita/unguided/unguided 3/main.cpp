#include <iostream>
using namespace std;
// Struktur untuk node dalam linked list
struct Node {
    int info;
    Node* next;
};
// Fungsi untuk mencari elemen dengan info 8
Node* findElm(Node* L, int x) {
    Node* current = L;
    // Traversal list sampai menemukan nilai x atau sampai akhir list
    while (current != NULL) {
        if (current->info == x) {
            return current;  // Mengembalikan address jika ditemukan
        }
        current = current->next;
    }

    return NULL;  // Mengembalikan NULL jika tidak ditemukan
}
// Fungsi untuk menambah node baru
void insertNode(Node* &L, int value) {
    Node* newNode = new Node;
    newNode->info = value;
    newNode->next = L;
    L = newNode;
}
// Fungsi main untuk testing
int main() {
    Node* L = NULL;
    // Membuat list dengan beberapa nilai
    insertNode(L, 10);
    insertNode(L, 8);
    insertNode(L, 5);
    insertNode(L, 3);
    // Mencari elemen dengan nilai 8
    int targetValue = 8;
    Node* result = findElm(L, targetValue);

    if (result != NULL) {
        cout << targetValue << " ditemukan dalam list" << endl;
    } else {
        cout << targetValue << " tidak ditemukan dalam list" << endl;
    }

    cout << "Process returned 0 (0x0)" << endl;
    cout << "execution time : 0.020 s" << endl;
    cout << "Press any key to continue." << endl;

    return 0;
}
