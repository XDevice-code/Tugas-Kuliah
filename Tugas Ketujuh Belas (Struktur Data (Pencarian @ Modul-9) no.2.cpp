#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#define N 255

using namespace std;

void katakata(char *de, char search, char change)
{
    int i=0;

    while(*de !='\0'){
        *de=((*de == search)?change:*de);
        de++;
        i++;
    }
}

int main(){

    char data[25], search, change;

    cout << "===============================";
    cout << "\n    Program Pindah ";
    cout << "\n===============================";

    cout << "\n\nMasukkan kalimat : ";
    cin >> data;
    cout << "> Masukkan karakter : ";
    cin >> search;
    cout << "> Karakter pengganti: ";
    cin >> change;

    katakata(data,search, change);
    cout <<"\nHasil ganti = "<< data;

    return 0;
}
