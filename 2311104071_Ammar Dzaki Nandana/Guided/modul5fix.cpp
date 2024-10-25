#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan elemen di awal linked list
void insertFirst(Node*& head, Node*& tail, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;

    if (tail == nullptr){
        tail = new_node;
    }
}

// Fungsi untuk menambahkan elemen di akhir linked list
void insertLast(Node*& head, Node*& tail, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = nullptr;

    if (head == nullptr){
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}

// Fungsi untuk mencari elemen dalam linked list
int findElement(Node* head, int x){
    Node* current = head;
    int index = 0;

    while (current != nullptr){
        if (current->data == x){
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}

// Fungsi untuk menampilkan linked list
void display(Node* node){
    while (node != nullptr){
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

// Fungsi untuk menghapus elemen dari linked list
void deleteElement(Node*& head, int x){
    if (head == nullptr){
        cout << "Linked list kosong" << endl;
        return;
    }

    if (head->data == x){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next != nullptr){
        if (current->next->data == x){
           Node* temp = current->next;
           current->next = current->next->next;
           delete temp;
           return;
        }
        current = current->next;
    }
}

int main(){
    Node* head = nullptr;
    Node* tail = nullptr;

    // Urutan dimasukkan agar sesuai dengan yang diinginkan
    insertFirst(head, tail, 5);
    insertFirst(head, tail, 3);
    insertFirst(head, tail, 7);

    insertLast(head, tail, 11);
    insertLast(head, tail, 14);
    insertLast(head, tail, 18);

    // Menampilkan elemen-elemen dalam linked list
    cout << "Element dalam linked list: ";
    display(head);

    int x;
    cout << "Masukan element yang ingin dicari: ";
    cin >> x;

    int result = findElement(head, x);

    if (result == -1)
        cout << "Element tidak ditemukan dalam linked list" << endl;
    else
        cout << "Element ditemukan dalam indeks " << result << endl;

    cout << "Masukan element yang ingin dihapus: ";
    cin >> x;
    deleteElement(head, x);

    cout << "Element dalam linked list setelah penghapusan: ";
    display(head);

    return 0;
}
