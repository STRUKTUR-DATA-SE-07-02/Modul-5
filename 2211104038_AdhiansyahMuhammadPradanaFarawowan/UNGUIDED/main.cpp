#include "singlelist.cpp"

// Baiknya disini aja
int count_elements(List &L) {
    ElmList *current = L.First;
    int count = 0;
    while (current != nullptr)
    {
        count = count + 1;
        current = current->next;
    }
    
    return count;
}

int main()
{
    // UNGUIDED 1
    List L;
    ElmList *P1, *P2, *P3, *P4, *P5;
    create_list(L);
    P1 = alokasi(2);
    insert_first(L, P1);
    P2 = alokasi(0);
    insert_first(L, P2);
    P3 = alokasi(8);
    insert_first(L, P3);
    P4 = alokasi(12);
    insert_first(L, P4);
    P5 = alokasi(9);
    insert_first(L, P5);
    
    print_info(L);
    // UNGUIDED 1

    std::cout << '\n';

    // UNGUIDED 2
    ElmList* searched_element = find_elm(L, 8);
    if (searched_element != nullptr) {
        std::cout << searched_element->info << " is found in list" << '\n';
    }
    // UNGUIDED 2

    // UNGUIDED 3
    std::cout << "Total info from the list is " << count_elements(L) << '\n';
    // UNGUIDED 3
    
    return 0;
}
