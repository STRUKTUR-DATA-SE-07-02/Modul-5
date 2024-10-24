#include <iostream>
#include "singlelist.h"

void create_list(List &L)
{
    L.First = nullptr;
}

ElmList *alokasi(int x)
{
    ElmList *new_elm = new ElmList;
    new_elm->info = x;
    new_elm->next = nullptr;

    return new_elm;
}

void dealokasi(ElmList *P)
{
    delete P;
}

void print_info(List &L)
{
    if (L.First == nullptr)
    {
        std::cout << "List is empty." << '\n';
    }

    ElmList *current = L.First;
    while (current != nullptr)
    {
        std::cout << current->info << " ";
        current = current->next;
    }
}

void insert_first(List &L, ElmList *P)
{
    P->next = L.First;
    L.First = P;
}

ElmList *find_elm(List &L, int x)
{
    if (L.First == nullptr)
    {
        std::cout << "List is empty." << '\n';
    }

    ElmList *current = L.First;
    while (current != nullptr)
    {
        if (current->info == x)
        {
            return current;
        }
        current = current->next;
    }

    return nullptr;
}
