#include <iostream>
using namespace std;

struct List {
    int info;
    List* next;
};

typedef List* address;

// fungsi list
void CreateList(List* &L) {
    L = NULL;
}

address alokasi(int x) {
    address P = new List;
    P->info = x;
    P->next = NULL;
    return P;
}

void insertFirst(List* &L, address P) {
    if (L == NULL) {
        L = P;
    } else {
        P->next = L;
        L = P;
    }
}

// fungsi pencarian
address findElm(List* L, int x) {
    address P = L;
    while (P != NULL) {
        if (P->info == x) {
            return P;  
        }
        P = P->next;
    }
    return NULL;  
}

int main() {
    List* L;
    address P1, P2, P3, P4, P5 = NULL;
    
    CreateList(L);
    
    // membuat linked list
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
    
    // input
    int searchValue;
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> searchValue;

    // mencari elemen dengan nilai input
    cout << "Mencari elemen dengan info " << searchValue << ":" << endl;
    address found = findElm(L, searchValue);
    if (found != NULL) {
        cout << searchValue << " ditemukan dalam list" << endl;
    } else {
        cout << "Elemen dengan info " << searchValue << " tidak ditemukan" << endl;
    }
    
    return 0;
}
