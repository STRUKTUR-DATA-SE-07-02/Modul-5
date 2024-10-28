#include <iostream>
using namespace std;

// Struktur untuk node dalam linked list
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan elemen baru ke akhir linked list
void insertLast(Node*& head, Node*& tail, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = nullptr;

    if (head == nullptr) {
        // Jika list kosong, node baru menjadi head dan tail
        head = new_node;
        tail = new_node;
    } else {
        // Jika list tidak kosong, tambahkan node baru di akhir
        tail->next = new_node;
        tail = new_node;
    }
}

// Fungsi untuk menghitung jumlah total elemen dalam linked list
int sumElements(Node* head) {
    int total = 0;
    Node* current = head;
    while (current != nullptr) {
        total += current->data;
        current = current->next;
    }
    return total;
}

// Fungsi untuk menampilkan elemen dalam linked list
void display(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    // Menambahkan elemen ke linked list
    insertLast(head, tail, 9);
    insertLast(head, tail, 12);
    insertLast(head, tail, 8);
    insertLast(head, tail, 0);
    insertLast(head, tail, 2);

    cout << "Elemen dalam linked list: ";
    display(head);

    // Menghitung total info dari seluruh elemen
    int total = sumElements(head);
    cout << "Total info dari kelima elemen adalah " << total << endl;

    return 0;
}
