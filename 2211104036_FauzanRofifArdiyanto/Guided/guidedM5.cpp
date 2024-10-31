#include <iostream>
using namespace std;

// Struktur untuk node dalam linked list
struct Node
{
    int data;
    Node *next;
};
// Fungsi untuk menambahkan elemen baru ke awal linked list

void insertFirst(Node *&head, Node *&tail, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;

    if (tail == nullptr)
    {
        tail = new_node;
    }
}
// Fungsi untuk menambahkan elemen baru ke akhir linked list
void insertLast(Node *&head, Node *&tail, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;

    if (tail == nullptr)
    {
        tail = new_node;
    }
}

// Fungsi untuk mencari elemen dalam linked list
int findElement(Node *head, int x)
{
    Node *current = head;
    int index = 0;

    while (current != nullptr)
    {
        if (current->data == x)
        {
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}

// Fungsi untuk menampilkan elemen dalam linked list
void display(Node *node)
{
    while (node != nullptr)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

// FUngsi untuk menghapus elemen dari linked list
void deleteElement(Node *&head, int x)
{
    if (head == nullptr)
    {
        cout << "Linked list kosong" << endl;
        return;
    }
