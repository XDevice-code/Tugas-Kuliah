#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
using namespace std;

typedef struct name {
string data_name;
name *next_name;
};
name *head_name;

typedef struct nim{
int data_nim;
nim *next_nim;
};
nim *head_nim;

void initHead();
int Emptynama();
int Emptynim();
void insertnama(int datanama);
void insertnim(int datanim);
void tampil();
void hapusnama();
void hapusnim();

void initHead()
{
    head_name = NULL;
    head_nim + NULL;
}

int Emptynama()
{
    return (head_name==NULL)?1:0;
}

int Emptynim()
{
    return (head_nim==NULL)?1:0;
}

void insertnama(string datanama)
{
    nama *anyar,*help;
    anyar = new nama;
    anyar->data_name = datanama;
    anyar->next_name = NULL;
    if(Emptynama()==1)
{
    head_name=anyar;
    head_name->next_name=NULL;
}
else
{
    help=head_name;
    while(help->next_name!=NULL)
{
    help=help->next_name;
}
    help->next_name = anyar;
}
}

void insertnim(int datanim)
{
nim *anyar, *help;
anyar = new nim;
anyar->data_nim=datanim;
anyar->next_nim=NULL;
if(Emptynim()==1)
{
head_nim=anyar;
head_nim->next_nim=NULL;
}
else
{
help=head_nim;
while(help->next_nim!=NULL)
{
help=help->next_nim;
}
help->next_nim=anyar;
}
}

void hapusnama()
{
nama *del,*help;
string d;
if(Emptynama()==0)
{
if(head_name->next_name!=NULL)
{
help=head_name;
while(help->next_name->next_name!=NULL)
{
help=help->next_name;
}
del=help->next_name;
d=del->data_name;
help->next_name=NULL;
delete del;
}
else
{
d=head_name>data_name;
head_name=NULL;
}
cout<<" "<<d<<" terhapus\n";
}
else
cout<<" (Masih kosong)\n";
}

void hapusnim()
{
nim *del,*help;
int d;
if(Emptynim()==0)
{
if(head_nim->next_nim!=NULL)
{
help=head_nim;
while(help->next_nim->next_nim!=NULL)
{
help=help->next_nim;
}
del=help->next_nim;
d=del->data_nim;
help->next_nim=NULL;
delete del;
}
else
{
d=head_nim->data_nim;
head_nim=NULL;
}
cout<<" \n";
}
else
cout<<" (Masih kosong)\n";
}

void tampil()
{
nim *help;
help = head_nim;

nama *help123;
help123=head_name;

if(Emptynim()==0&&Emptynama()==0)
{
cout<<"\tNama\t\tNIM\n";
cout<<"\t------------------------\n";
while(help!=NULL&&help123!=NULL)
{
cout<<"\t"<<help123->data_name<<"\t\t"<<help->data_nim<<"\n";
help123=help123->next_name;
help=help->next_nim;
}
cout<<"\n";
}
else
cout<<"(Masih kosong)\n";
}

int main()
{
cout<<"\t\t\t = = = = = = = = = = = = = = = = = = = = = = = = =\n";
cout<<"\t\t\t Single Linked List Non Circular\n\t\t\t = = = = = = = = = = = = = = = = = = = = = = = = =\n\n\t";
initHead();


cout<<"\n Masukkan Nama dan NIM :\n";
string data_name;
int data_nim;
for(int i=1;i<=4;i++)
{
cout<<" Masukkan nama ke-"<<i<<":";
cin>>data_name;
insertnama(data_name);
cout<<" Masukkan nim ke-"<<i<<":";
cin>>data_nim;
insertnim(data_nim);
}
cout<<"\n";

cout<<" Tampilkan isi list :\n\n";
tampil();

cout<<"\n Hapus 1 data terakhir\n\n";
for(int i=1;i<2;i++)
{
hapusnama();
hapusnim();
}
cout<<"\n";

cout<<" Tampilkan isi list :\n\n";
tampil();
}

