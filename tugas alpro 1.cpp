#include <iostream>
using namespace std;

int main()
{
    //* Tugas 1
    cout<<"NPM : 2210631170085"<<endl;
    cout<<"Nama : Muhammad Mirza Kurniawan"<<endl;
    cout<<"Umur : 18 tahun"<<endl;
    cout<<"Kelas : 1C "<<endl;
    cout<<"Hobi : Nonton Film "<<endl;
    cout<<"Cita-Cita : Jadi Orang Sukses "<<endl
         <<endl;

    //* Tugas 2

    cout<<"--------Menggunakan Variabel Sementara--------"<<endl<<endl;
    int Num1,Num2,Temp;
    cout<<"Masukkan 2 angka yang ingin ditukar:"<<endl;
    cin>>Num1>>Num2;
    Temp=Num1;
    Num1=Num2;
    Num2=Temp;
    cout<<endl<<"Setelah ditukar:"<<endl;
    cout<<Num1<<" "<<Num2;

    cout<<endl<<endl<<"--------Tanpa Variabel Sementara---------"<<endl;

    int a = 21, b = 45;
    cout<<endl<<"Sebelum ditukar:"<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"\nSetelah ditukar:"<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;
    system("pause");



    return 0; }
