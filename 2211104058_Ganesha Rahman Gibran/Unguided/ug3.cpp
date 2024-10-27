#include <iostream>
using namespace std;

struct List {
    int info;
    List* next;
};

typedef List* address;

// fungsi buat list
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

// fungsi hitung total
int sumInfo(List* L) {
    address P = L;
    int total = 0;
    while (P != NULL) {
        total += P->info;
        P = P->next;
    }
    return total;
}

int main() {
    List* L;
    address P1, P2, P3, P4, P5 = NULL;
    
    CreateList(L);
    
    //linked list
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
    
    // print
    cout << "Total info dari kelima elemen adalah " << sumInfo(L) << endl;
    
    return 0;
}
