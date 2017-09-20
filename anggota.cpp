#include "anggota.h"

void createListAnggota (List_anggota &L){
    L.first = Nil;
    L.last  = Nil;
}
adr_anggota alokasianggota(infotype_anggota a){
    adr_anggota P = new ElmList_anggota;
    P->info = a;
    P->next = Nil;
    P->prev = Nil;
    return P;
}
void dealokasiAnggota (adr_anggota &P){
       delete(P);
}
void insertFirstAnggota(List_anggota &L, adr_anggota P){
if( L.first == Nil)
    {
        L.first = P;
        L.last  = P;
    }
    else
    {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}
void insertAfterAnggota(List_anggota &L, adr_anggota P, adr_anggota Prec) {
    if(L.first==Nil)
    {
        L.first =P;
        L.last  =P;
    }
    else
    {
        P->prev = Prec;
        P->next = Prec->next;
        Prec->next = P;
        P->next->prev = P;
    }
}
void insertLastAnggota (List_anggota &L, adr_anggota P) {
    if(L.first==Nil)
    {
        L.first = P;
        L.last  = P;
    }
    else
    {
        L.last->next=P;
        P->prev = L.last;
        L.last = P;
    }
}

adr_anggota findElmAnggota(List_anggota L, int a) {
    adr_anggota P;
    P=L.first;
	while ((P != Nil) && (P->info.nim!= a)) {
        P=P->next;
    }
    return P;
}

void deleteFirstAnggota(List_anggota &L, adr_anggota &P) {
    if(L.first==Nil)
        {
            cout<<"List Kosong";
        }
        else if(L.first->next==Nil)
        {
            P=L.first;
            L.first=Nil;
        }
        else
        {
            P=L.first;
            L.first= P->next;
            P->next = Nil;
            L.first ->prev = Nil;

        }
        dealokasiAnggota(P);
}

void deleteAfterAnggota(List_anggota &L, adr_anggota &P, adr_anggota Prec) {
    if(L.first==Nil)
    {
        cout<<"List Kosong";
    }
    else if(L.first->next==Nil)
    {
        P=L.first;
        L.first=Nil;
    }
    else
    {
        P=Prec->next;
        Prec->next=P->next;
        P->next = Nil;
        P->prev = Nil;
        Prec->next->prev = Nil;
    }
    dealokasiAnggota(P);
}
void deleteLastAnggota(List_anggota &L, adr_anggota &P) {
    if(L.first==Nil)
    {
        cout<<"List Kosong";
    }
    else if(L.first->next==Nil)
    {
        P=L.first;
        L.first=Nil;
    }
    else
    {
        P= L.last;
        L.last=L.last->prev;
        P->prev = Nil;
        L.last->next = Nil;
    }
    dealokasiAnggota(P);
}
void deleteAnggota (List_anggota &L, adr_anggota &P, int x) {
    adr_anggota Q = findElmAnggota(L,x);
    if(Q==Nil)
    {
        cout<<"Anggota tidak ditemukan";
    }
    else
    {
        if(Q==L.first)
        {
            deleteFirstAnggota(L,P);
        }
        else if(Q->next==Nil)
        {
            deleteLastAnggota(L,P);
        }
        else
        {
            Q=Q->prev;
            deleteAfterAnggota(L,P,Q);
        }
        cout<<"Data Berhasil dihapus!"<<endl;
    }
}
