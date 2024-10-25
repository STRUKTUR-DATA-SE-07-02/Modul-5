#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void InsertFirst(Node*& head, Node*& tail, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;

    if(tail==nullptr){
    tail=new_node;
    }
}    
void InsertLast(Node*& head, Node*& tail, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = nullptr;

    if(head==nullptr){
        head = new_node;
        tail = new_node;
    }else{
        tail->next = new_node;
        tail = new_node;
    }
}
int findElement(Node* head, int x){
    Node* current = head;
    int index = 0;

    while(current != nullptr){
        if(current->data == x){
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}
void display(Node* node){
    while(node != nullptr){
        cout<<node->data<<" ";
        node=node->next;
    }
    cout<<endl;
}
void deleteElement(Node*& head, int x){
    if(head==nullptr){
        cout<<"Linked List Kosong"<<endl;
        return;
    }
    if(head->data==x){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node* current=head;
    while(current->next != nullptr){
        if(current->next->data==x){
            Node* temp=current->next;
            current->next=current->next->next;
            delete temp;
            return;
        }
        current=current->next;
    }
}
int main(){
    Node* head=nullptr;
    Node* tail=nullptr;

    InsertFirst(head, tail, 3);
    InsertFirst(head, tail, 5);
    InsertFirst(head, tail, 7);

    InsertLast(head, tail, 11);
    InsertLast(head, tail, 14);
    InsertLast(head, tail, 18);
    cout<<"Elemen dalam linked list: ";
    display(head);

    int x;
    cout<<"Masukan elemen yang ingin dicari: ";
    cin>>x;

    int result= findElement(head, x);
    if(result==-1)
        cout<<"elemen tidak ditemukan dalam linked list"<<endl;
    else
        cout<<"elemen ditemukan dalam indeks "<<result<<endl;

    cout<<"Masukan elemen yang ingin dihapus: ";
    cin>>x;
    deleteElement(head, x);
    cout<<"elemen dalam linked list setelah penghapusan: ";
    display(head);
    return 0;

}