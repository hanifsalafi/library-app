#include <iostream>
#include "anggota.h"
#include <stdlib.h>
using namespace std;

void home()
{
    system("CLS");
    cout<<"-----------------------------------"<<endl;
    cout<<"  Selamat Datang Di Tel-U Library  "<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"anda masuk";
}

void login(List_anggota list)
{
    string username,password;
    system ("CLS");
    cout<<"-----------------------------------"<<endl;
    cout<<"  Selamat Datang Di Tel-U Library  "<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"-- Silahkan Login --"<<endl;
    cout<<" #  Username : "<<endl;
    cin>>username;
    cout<<" #  Password : "<<endl;
    cin>>password;
    adr_anggota q;
    q=list.first;
    while ((q != Nil) && (q->info.nama!= username) && (q->info.password!=password)) {
        q=q->next;
    }

    if ((username==q->info.nama) && (password==q->info.password)){
        home();
    }else{
        cout<<"Username atau password salah!"<<endl;
        system("PAUSE");
        login(list);
    }
}

void menu (List_anggota l)
{
    int pilih;
    system ("CLS");
    cout<<"-----------------------------------"<<endl;
    cout<<"  Selamat Datang Di Tel-U Library  "<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"Pilih Menu : "<<endl;
    cout<<"1. Login"<<endl;
    cout<<"2. Register"<<endl;
    cout<<endl;
    cout<<">> ";
    cin>>pilih;
    if (pilih == 1)
    {

        login(l);
    }
    else if (pilih == 2)
    {
        int nim;
        string nama,username,password;
        system ("CLS");
        cout<<"-----------------------------------"<<endl;
        cout<<"  Selamat Datang Di Tel-U Library  "<<endl;;
        cout<<"-----------------------------------"<<endl;
        cout<<""<<endl;
        cout<<"-- Isi Data Di Bawah Ini --"<<endl;
        cout<<" #  Nama : "<<endl;
        cin>>nama;
        cout<<" #  Nim : "<<endl;
        cin>>nim;
        cout<<" #  Username : "<<endl;
        cin>>username;
        cout<<" #  Password : "<<endl;
        cin>>password;
        menu(l);
    }

}

int main()
{
//    char yesno;
//    List_anggota l_anggota;
//    createListAnggota(l_anggota);
//    anggota a;
//    cout<<"-----------------------------------"<<endl;
//    cout<<"  Selamat Datang Di Tel-U Library  "<<endl;
//    cout<<"-----------------------------------"<<endl;
//    cout<<""<<endl;
//    cout<<"Sudah punya akun ? (y/n)";
//    cin>>yesno;
//    if (yesno == 'n')
//    {
//        int nim;
//        string nama,username,password;
//        system ("CLS");
//        cout<<"-----------------------------------"<<endl;
//        cout<<"  Selamat Datang Di Tel-U Library  "<<endl;;
//        cout<<"-----------------------------------"<<endl;
//        cout<<""<<endl;
//        cout<<"-- Isi Data Di Bawah Ini --"<<endl;
//        cout<<" #  Nama : "<<endl;
//        cin>>a.nama;
//        cout<<" #  Nim : "<<endl;
//        cin>>a.nim;
//        cout<<" #  Username : "<<endl;
//        cin>>a.username;
//        cout<<" #  Password : "<<endl;
//        cin>>password;
//        menu();
//    }
//    else if (yesno == 'y')
//    {
//        login();
//    }
    List_anggota l_anggota;
    createListAnggota(l_anggota);
    menu(l_anggota);
     return 0;
}
