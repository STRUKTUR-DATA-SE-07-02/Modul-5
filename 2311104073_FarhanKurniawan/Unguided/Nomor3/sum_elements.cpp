#include <iostream>
using namespace std;

typedef int infotype;

struct Node {
    infotype data;
    Node* next;
};

// Fungsi untuk menghitung total nilai semua elemen dalam linked list
int sumElements(Node* L) {
    int sum = 0;
    Node* current = L;
    while (current != NULL) {
        sum += current->data;
        current = current->next;
    }
    return sum;
}

// Fungsi bantu untuk membuat node baru
Node* createNode(infotype data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Contoh pembuatan linked list
    Node* head = createNode(9);
    head->next = createNode(12);
    head->next->next = createNode(8);
    head->next->next->next = createNode(0);
    head->next->next->next->next = createNode(2);

    // Menghitung dan mencetak total nilai dari seluruh elemen
    int total = sumElements(head);
    cout << "Total info dari kelima elemen adalah " << total << endl;

    // Membebaskan memori
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
