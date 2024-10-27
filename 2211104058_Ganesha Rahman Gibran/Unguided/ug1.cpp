#include <iostream>
using namespace std;

struct List {
    int info;
    List* next;
};

typedef List* address;

// membuat list kosong
void CreateList(List* &L) {
    L = NULL;
}

// alokasi node baru
address alokasi(int x) {
    address P = new List;
    P->info = x;
    P->next = NULL;
    return P;
}

// dealokasi node
void dealokasi(address &P) {
    delete P;
}

// menambah node di awal list
void insertFirst(List* &L, address P) {
    if (L == NULL) {
        L = P;
    } else {
        P->next = L;
        L = P;
    }
}

// mencetak isi list
void printInfo(List* L) {
    address P = L;
    while (P != NULL) {
        cout << P->info;
        if (P->next != NULL) {
            cout << " -> ";
        }
        P = P->next;
    }
    cout << endl;
}

int main() {
    List* L;
    address P1, P2, P3, P4, P5 = NULL;
    
    CreateList(L);
    
    // membuat node lalu menyisipkan sesuai urutan
    P1 = alokasi(2);
    insertFirst(L,P1);
    
    P2 = alokasi(0);
    insertFirst(L,P2);
    
    P3 = alokasi(8);
    insertFirst(L,P3);
    
    P4 = alokasi(12);
    insertFirst(L,P4);
    
    P5 = alokasi(9);
    insertFirst(L,P5);
    
    // mencetak output
    cout << "Hasil akhir linked list: ";
    printInfo(L);
    
    return 0;
}