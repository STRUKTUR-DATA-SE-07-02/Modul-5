#include <iostream>
using namespace std;

// Struktur Node untuk Single Linked List
struct Node {
    int info;
    Node *next;
};

// Fungsi untuk membuat node baru
Node* newNode(int data) {
    Node* node = new Node;
    node->info = data;
    node->next = NULL;
    return node;
}

// Fungsi untuk menemukan node dengan info tertentu
Node* findElm(Node* head, int x) {
    Node* current = head;
    while (current != NULL) {
        if (current->info == x) {
            return current;
        }
        current = current->next;
    }
    return NULL; // Node tidak ditemukan
}

int main() {
    // Membuat Singly Linked List
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    head->next->next->next->next->next = newNode(6);
    head->next->next->next->next->next->next = newNode(7);
    head->next->next->next->next->next->next->next = newNode(8);

    // Mencari node dengan info 8
    Node* foundNode = findElm(head, 8);

    if (foundNode != NULL) {
        cout << "8 ditemukan dalam list" << endl;
    } else {
        cout << "8 tidak ditemukan dalam list" << endl;
    }

    return 0;
}