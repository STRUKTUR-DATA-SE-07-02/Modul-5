#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertFirst(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    if (tail == nullptr) {
        tail = newNode;
    }
}

void insertLast(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (tail) {
        tail->next = newNode;
    } else {
        head = newNode;
    }
    tail = newNode; 
}

void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int findElement(Node* head, int x) {
    int index = 0;
    Node* current = head;
    while (current != nullptr) {
        if (current->data == x) {
            return index;
        }
        current = current->next;
        index++;
    }
    return -1; 
}

void deleteElement(Node*& head, int x) {
    Node* current = head;
    Node* previous = nullptr;

    while (current != nullptr && current->data != x) {
        previous = current;
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Elemen tidak ditemukan untuk dihapus." << endl;
        return;
    }

    if (previous == nullptr) { 
        head = current->next;
    } else {
        previous->next = current->next;
    }
    delete current; 
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    insertFirst(head, tail, 3);
    insertFirst(head, tail, 5);
    insertFirst(head, tail, 7);

    insertLast(head, tail, 11);
    insertLast(head, tail, 14);
    insertLast(head, tail, 18);

    cout << "Elemen dalam linked list: ";
    display(head);

    int x;
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> x;

    int result = findElement(head, x);

    if (result == -1)
        cout << "Elemen tidak ditemukan dalam linked list" << endl;
    else
        cout << "Elemen ditemukan pada indeks " << result << endl;

    cout << "Masukkan elemen yang ingin dihapus: ";
    cin >> x;
    deleteElement(head, x);

    cout << "Elemen dalam linked list setelah penghapusan: ";
    display(head);

    return 0;
}