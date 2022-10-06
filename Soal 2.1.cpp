//* TUGAS 2 Buatlah program untuk menukar dua angka dengan menggunakan variabel sementara dan tanpa menggunakan variabel sementara

//Tanpa Variabel Sementara

#include <iostream>
using namespace std;

int main ()
{

cout<<"--------Tanpa Variabel Sementara---------"<<endl;

    int a = 21, b = 45;
    cout<<"Sebelum ditukar:"<<endl;
    cout<<"a="<<a<<",b="<<b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"\nSetelah ditukar:"<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;
    system("pause");



    return 0; }
