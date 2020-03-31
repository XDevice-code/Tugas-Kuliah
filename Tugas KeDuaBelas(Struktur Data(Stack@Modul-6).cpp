#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MaxElemen 200
using namespace std;

struct Tumpukan
{
 char Isi[MaxElemen];
   int Atas;
} T;
void PUSH (char x){
if(T.Atas == MaxElemen){
cout<<"Tumpukan Sudah Penuh";
 getch();
}
else{
 T.Atas = T.Atas + 1;
 T.Isi[T.Atas] = x;
}
}
char POP(){
 char hasil, total;
 if(T.Atas == 0){
    cout<<"Tumpukan sudah kosong";
      hasil = ' ';
   }
   else{
    hasil = T.Isi[T.Atas];
      T.Atas = T.Atas - 1;
   }
   return hasil;
}
int main ()
{
     int I;
     char Kalimat[MaxElemen];
     system("cls");
     T.Atas =0;
     cout<<"Aplikasi Stack untuk Membalik kalimat\n";
     cout<<"----------------------------------------\n\n";
     cout<<"Masukkan sembarang kalimat : ";gets(Kalimat);

     system("cls");
     Sleep(700);
     cout<<"\tHasil Dari Pembalikan Kalimat Diatas\n";cout<<endl;
     cout<<"====================================================";
     cout<<endl<<endl;
     Sleep(1000);
     cout<<"Kalimat Asli : "<<Kalimat;

     for(I=0;I<strlen(Kalimat);I++)
     {
      PUSH(Kalimat[I]);
      }
      Sleep(900);
      {
      cout<<endl<<endl;
      cout<<"Jumlah Huruf = " <<strlen(Kalimat)<< " ";
      }
      cout<<endl<<endl;
      Sleep(800);
      cout<<"\nKalimat Setelah di Balik : ";
      for (I=0;I<strlen(Kalimat);I++)
      {
       cout<<""<<POP();
        }
    Sleep(2000);
       system("cls");
       cout<<"udah itu aja";
       getch();
       cout<<endl<<endl;
}
