#include <iostream>
using namespace std;

// Define the types
typedef int infotype;
struct ElmList; // Forward declaration
typedef ElmList* address;

// Element of the list
struct ElmList {
    infotype info;
    address next;
};

// List definition
struct List {
    address first;
};

// Initialize the list
void createList(List &L) {
    L.first = NULL;
}

// Allocate a new element
address alokasi(infotype x) {
    address p = new ElmList;
    p->info = x;
    p->next = NULL;
    return p;
}

// Deallocate an element
void deAlokasi(address &p) {
    delete p;
    p = NULL;
}

// Print all elements in the list
void printInfo(const List &L) {
    address p = L.first;
    while (p != NULL) {
        cout << p->info << " ";
        p = p->next;
    }
    cout << endl;
}

// Insert an element at the beginning
void insertFirst(List &L, address p) {
    p->next = L.first;
    L.first = p;
}

int main() {
    List L;
    address P1, P2, P3, P4, P5;

    // Initialize pointers
    P1 = P2 = P3 = P4 = P5 = NULL;

    // Create the list
    createList(L);

    // Allocate nodes and insert them into the list
    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    // Print the elements in the list
    printInfo(L);

    return 0;
}
