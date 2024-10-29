#include <iostream>
using namespace std;

struct ElmList {
    int info;
    ElmList* next;
};
typedef ElmList* address;
typedef struct List {
    address First;
};
void createList(List &L) {
    L.First = NULL;
}
address alokasi(int x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    return P;
}
void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}
void printInfo(List L) {
    address P = L.First;
    while (P != NULL) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}
// main.cpp
int main() {
    List L;
    address P1, P2, P3, P4, P5;

    createList(L);

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

    printInfo(L);

    return 0;
}
