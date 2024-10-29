#include <iostream>
#include "singlelist.cpp"

using namespace std;

int main()
{
    List L;
    address P1, P2, P3, P4, P5 = NULL;
    createList(L);
 
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
 
    printInfo(L);

    address foundNode = findElm(L, 8);

    if (foundNode != nullptr)
    {
        cout << "Elemen dengan info 8 ditemukan: " <<foundNode->info <<endl;
    } else
    {
        cout << "Eleen dengan info 8 tidak ditemukan" <<endl;
    }

    cout << "total info dari semua elemen: " << sumInfo(L) <<endl;
    

    return 0;
} 