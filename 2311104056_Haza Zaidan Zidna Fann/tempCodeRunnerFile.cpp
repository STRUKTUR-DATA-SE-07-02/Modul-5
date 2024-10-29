#include <iostream>

using namespace std;

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void createList(List &L) {
    L.First = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = NULL;
}

void printInfo(List L) {
    address P = L.First;
    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

address findElm(List L, infotype x) {
    address P = L.First;
    while (P != NULL) {
        if (P->info == x) {
            cout << x << " ditemukan dalam list" << endl;
            return P;
        }
        P = P->next;
    }
    cout << x << " tidak ditemukan dalam list" << endl;
    return NULL;
}

int main() {
    List L;
    address P1, P2, P3, P4, P5 = NULL;
    createList(L);

    // Insert elements
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

    // Print all elements
    cout << "Elemen dalam list: ";
    printInfo(L);

    // User input for element search
    infotype searchValue;
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> searchValue;

    // Find element
    findElm(L, searchValue);

    // Calculate total info of all elements
    address P = L.First;
    int totalInfo = 0;
    while (P != NULL) {
        totalInfo += P->info;
        P = P->next;
    }
    cout << "Total info dari kelima elemen adalah " << totalInfo << endl;

    return 0;
}