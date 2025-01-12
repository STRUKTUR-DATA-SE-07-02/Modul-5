#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertFirst(Node*& head, Node*& tail, int new_data) {
    Node* newNode = new Node();
    newNode->data = new_data;
    newNode->next = head;
    head = newNode;

    if (tail == NULL) {
        tail = head;
    }
}

void insertLast(Node*& head, Node*& tail, int new_data) {
    Node* newNode = new Node();
    newNode->data = new_data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int findELement (Node* head, int x) {
    Node* current = head;
    int index = 0;

    while (current != NULL) {
        if (current->data == x) {
            return index;
        }
        current = current->next;
        index++;
    }

    return -1;
}

void display(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

void deleteElement(Node*& head, int x) {
    if(head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (head->data == x) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next != NULL) {
        if (current->next->data == x) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            return;
        }
        current = current->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertFirst(head, tail, 3);
    insertFirst(head, tail, 5);
    insertFirst(head, tail, 7);

    insertLast(head, tail, 11);
    insertLast(head, tail, 14);
    insertLast(head, tail, 18);

    cout << "Elements in linked list: ";
    display(head);

    int x;
    cout << "Enter element to be searched: ";
    cin >> x;

    int result = findELement(head, x);

    if(result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << result << endl;

    cout << "Enter element to be deleted: ";
    cin >> x;
    deleteElement(head, x);

    cout << "Elements in linked list after deletion: ";
    display(head);

    return 0;
    }
}
