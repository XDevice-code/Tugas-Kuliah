#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#define MAX 8
using namespace std;

typedef struct{
int data[MAX];
int head;
int tail;
} queue;

    queue antrian;
void create(){
    antrian.head=antrian.tail=-1;
}
int IsEmpty(){
    if (antrian.tail==-1)
        return 1;
    else
        return 0;
}
int IsFull(){
    if (antrian.tail==MAX-1)
        return 1;
    else
        return 0;
}
void enqueue(int data){
    if (IsEmpty()==1){
        antrian.head=antrian.tail=0;
            antrian.data[antrian.tail]=data;
                cout<<"%d masuk!"<<antrian.data[antrian.tail]<<" ";
void tampil();{
    if (IsEmpty()==0){
        for(int i=antrian.head;i<=antrian.tail;i++){
            cout<<"%d " <<antrian.data[i]<<" ";
        }
    }else cout<<"data kosong!\n";}
    }else
        if (IsFull()==0){
        antrian.tail++;
            antrian.data[antrian.tail]=data;
                cout<<"%d masuk!"<<antrian.data[antrian.tail]<<" ";
        }
}
int deque(){
int i;
int e=antrian.data[antrian.head];
        for(i=antrian.head;i<=antrian.tail-1;i++){
            antrian.data[i]=antrian.data[i+1];
    }
    antrian.tail--;
        return e;
}
void clear(){
antrian.head=antrian.tail=-1;
    cout<<"data clear";
}
void tampil(){
int jum=0;
    if (IsEmpty()==0){
        for (int i=antrian.head;i<=antrian.tail;i++){
            cout<<"%d"<<antrian.data[i];
        jum=jum+antrian.data[i];
{
int main();
int pilihankamu;
int data;
    create();
do{
system("cls");
cout<<"Menu Antrian\n";
cout<<"1. Enqueue\n";
cout<<"2. Dequeue\n";
cout<<"3. Tampil\n";
cout<<"4. Clear\n";
cout<<"5. Exit\n";
cout<<"Pilih yang ke = ";
    cin>>pilihankamu;
        switch(pilihankamu){
        case 1 : cout<<"Data = "; cin>>pilihankamu; enqueue(data);
        case 2 : cout<<"Elemen yang keluar : %d"<<deque()<< " ";
        case 3 : tampil();
        case 4 : clear();
        }
        getch();
}while(pilihankamu!=5);
    }
}
    }
}
