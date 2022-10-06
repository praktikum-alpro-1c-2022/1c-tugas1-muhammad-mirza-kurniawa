 //* Tugas 2 Buatlah program untuk menukar dua angka dengan menggunakan variabel sementara dan tanpa menggunakan variabel sementara
 // Menggunakan Variabel Sementara

#include <iostream>
 using namespace std;
 int main()
{

    cout<<"--------Menggunakan Variabel Sementara--------"<<endl;
    int Num1;
    int Num2;
    int Temp;

    cout<<"Masukkan angka pertama :"<<endl;
    cin>>Num1;
    cout<<"Masukkan angka kedua :";
    cin>>Num2;
    Temp=Num1;
    Num1=Num2;
    Num2=Temp;
    cout<<"Setelah angka ditukar"<<endl;
    cout<<"Value angka pertama :"<<Num1<<endl;
    cout<<"Value angka kedua :"<<Num2;

    return 0;
    }
