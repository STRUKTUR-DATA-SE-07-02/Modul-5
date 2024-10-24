#ifndef _SINGLELIST_H
#define _SINGLELIST_H

struct ElmList
{
    int info;
    struct ElmList *next;
};

struct List
{
    struct ElmList *First;
};

void create_list(List &L);

ElmList *alokasi(int x);

void dealokasi(ElmList *P);

void print_info(List &L);

ElmList *find_elm(List &L, int x);

#endif
