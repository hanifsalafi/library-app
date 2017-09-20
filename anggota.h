#ifndef ANGGOTA_H_INCLUDED
#define ANGGOTA_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#define Nil NULL

using namespace std;
struct anggota{
    int nim;
    string username;
    string nama;
    string password;
};
typedef anggota infotype_anggota;
typedef struct ElmList_anggota *adr_anggota;
struct ElmList_anggota
{
    infotype_anggota info;
    adr_anggota next;
    adr_anggota prev;
};
struct List_anggota
{
    adr_anggota first;
    adr_anggota last;
};
void createListAnggota (List_anggota &L);
adr_anggota alokasianggota(infotype_anggota a);
void dealokasiAnggota (adr_anggota &P);

void insertFirstAnggota(List_anggota &L, adr_anggota P);
void insertAfterAnggota(List_anggota &L, adr_anggota P, adr_anggota Prec);
void insertLastAnggota (List_anggota &L, adr_anggota P);

adr_anggota findElmAnggota(List_anggota L, int a);

void deleteFirstAnggota(List_anggota &L, adr_anggota &P);
void deleteAfterAnggota(List_anggota &L, adr_anggota &P, adr_anggota Prec);
void deleteLastAnggota(List_anggota &L, adr_anggota &P);
void deleteAnggota (List_anggota &L, adr_anggota &P, int x);
#endif // ANGGOTA_H_INCLUDED
