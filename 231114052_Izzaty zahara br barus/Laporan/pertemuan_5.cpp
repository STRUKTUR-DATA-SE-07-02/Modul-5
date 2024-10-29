#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertfirst(Node*& head, Node*& tail, int new_data){
    Node*new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;

    if (tail == nullptr){
        tail = new_node;
    }
}

void inserlast(Node*& head, Node*& tail, int new_data){
    Node*new_node = new Node();
    new_node->data = new_data;
    new_node->next = nullptr;

    if (head == nullptr){
        head = new_node;
        tail = new_node;
    }
    else{
        tail->next = new_node;
        tail = new_node;
    }
}

int findElement(Node* head, int x){
    Node* current = head;
    int index = 0;

    while (current != nullptr){
        if (current->data == x){
            return index;
        }
        current = current->next;
        index ++;
    }
    return-1;
}

void display(Node* node){
    while (node != nullptr){
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

void deletElement(Node* head, int x){
    if (head == nullptr){
        cout << "List is empty" << endl;
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
        if(current-> next-> data == x){
            Node* temp = current->next;
            current->next = current->next-> next;
            delete temp;
            return;
        }
        current = current->next;

    }
}
int main(){
    Node* head = nullptr;
    Node* tail = nullptr;

    insertfirst(head, tail, 3);
    insertfirst(head, tail, 5);
    insertfirst (head, tail, 7);

    inserlast(head, tail, 11);
    inserlast(head, tail, 14);
    inserlast(head, tail, 18);

    cout << "Elemen dalam linked list: ";
    display(head);

    int x;
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> x;

    int result = findElement(head, x);

    if (result == -1)
        cout << "Elemen tidak ditemukan dalam likend list" << endl;
    else
        cout << "Elemen ditemukan pada index " << result << endl;
    
    cout <<"Masukkan elemen yang ingin dihapus: ";
    cin >> x;
    deletElement(head, x);

    cout << "Elemen dalam linked list  setelah penghapusan: ";
    display(head);

    return 0;

}

