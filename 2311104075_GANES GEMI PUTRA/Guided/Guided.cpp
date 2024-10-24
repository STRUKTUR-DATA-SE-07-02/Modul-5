#include <iostream>
using namespace std;

// Struktur untuk node dalam linked list
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan elemen baru ke awal linked list
void insertFirst(Node*& head, Node*& tail, int new_data) {
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;

    if (tail == nullptr) {
        tail = new_node;
    }
}

// Fungsi untuk menambahkan elemen baru ke akhir linked list
void insertLast(Node*& head, Node*& tail, int new_data) {
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}

// Fungsi untuk mencari elemen dalam linked list
int findElement(Node* head, int x) {
    Node* current = head;
    int index = 0;

    while (current != nullptr) {
        if (current->data == x) {
            return index;
        }
        current = current->next;
        index++;
    }

    return -1; // Jika elemen tidak ditemukan
}

// Fungsi untuk menampilkan elemen dalam linked list
void display(Node* node) {
    if (node == nullptr) {
        cout << "Linked list kosong." << endl;
        return;
    }

    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

// Fungsi untuk menghapus elemen dalam linked list
void deleteElement(Node*& head, Node*& tail, int x) {
    Node* current = head;
    Node* prev = nullptr;

    // Jika linked list kosong
    if (current == nullptr) {
        cout << "Linked list kosong, tidak ada elemen yang dapat dihapus." << endl;
        return;
    }

    // Jika head berisi elemen yang ingin dihapus
    if (current != nullptr && current->data == x) {
        head = current->next; // Pindah head ke node berikutnya
        delete current; // Hapus node head sebelumnya
        // Jika list kosong setelah penghapusan
        if (head == nullptr) {
            tail = nullptr;
        }
        return;
    }

    // Mencari node yang berisi elemen x
    while (current != nullptr && current->data != x) {
        prev = current;
        current = current->next;
    }

    // Jika elemen tidak ditemukan
    if (current == nullptr) {
        cout << "Elemen tidak ditemukan!" << endl;
        return;
    }

    // Node ditemukan, hapus node tersebut
    prev->next = current->next;

    // Jika node yang dihapus adalah tail
    if (current == tail) {
        tail = prev;
    }

    delete current;
}

// Fungsi utama untuk menjalankan program
int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    // Menambahkan elemen ke awal linked list
    insertFirst(head, tail, 18);
    insertFirst(head, tail, 14);
    insertFirst(head, tail, 11);
    insertFirst(head, tail, 3);
    insertFirst(head, tail, 5);
    insertFirst(head, tail, 7);

    // Menampilkan linked list
    cout << "Elemen dalam LinkedList: ";
    display(head);

    // Mencari elemen
    int x;
    cout << "Masukan elemen yang ingin dicari: ";
    cin >> x;

    int result = findElement(head, x);
    if (result == -1) {
        cout << "Elemen tidak ditemukan dalam linked list!" << endl;
    } else {
        cout << "Elemen ditemukan pada indeks: " << result << endl;
    }

    // Menghapus elemen
    cout << "Masukan elemen yang ingin dihapus: ";
    cin >> x;
    deleteElement(head, tail, x);

    // Menampilkan linked list setelah penghapusan
    cout << "Elemen dalam linked list setelah Penghapusan: ";
    display(head);

    return 0;
}
