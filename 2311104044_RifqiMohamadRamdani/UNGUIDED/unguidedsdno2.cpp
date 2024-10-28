#include <stdio.h>

typedef struct tElmtList {
    int info;
    struct tElmtList *next;
} ElmtList;

typedef ElmtList* address;
typedef int infotype;

address findElm(ElmtList *L, infotype x) {
    while (L != NULL) {
        if (L->info == x) {
            return L;
        }
        L = L->next;
    }
    return NULL;
}

int main() {

    ElmtList e1, e2, e3;
    e1.info = 5; e1.next = &e2;
    e2.info = 8; e2.next = &e3;
    e3.info = 10; e3.next = NULL;

    address result = findElm(&e1, 8);

    if (result != NULL) {
        printf("%d ditemukan dalam list\n", result->info);
    } else {
        printf("Elemen tidak ditemukan\n");
    }

    return 0;
}
