#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void cari (int A[10], int k){

    int index[10], i,j=0,n;

    for (i=0;i<10;i++){
        if(A[i]==k){
            index[j]=i;
            j++;
        }
      }

    if (j>0){
        cout << "\nData tersebut dalam index ke ";

        for(i=0;i<j;i++){
            cout << index[i] << " ";
        }
    }else{
        cout << "\n";
        cout << "\nData tidak ditemukan dalam array\n";
    }
    getch();
}

int main()
{
    int data[10],i,j=0,dicari,n;

    cout << "Program Pencarian Numerik\n\n";

    cout << "Masukan jumlah Data Angka: ";
    cin >> n;
    cout << "\n";

    for(i=1;i<=n;i++){
        cout << "Data ke -" << i << " : ";
        cin >> data[i];
    }

    cout << "Input data yang akan km cari : ";
    cin >> dicari;

    cari(data, dicari);

    return 0;
}
