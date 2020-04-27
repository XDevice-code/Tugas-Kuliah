#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

main(){
    int r, s, z, k, m;
    char nm[6][20], temp[40];

    cout<<"Inputkan Huruf Satu Aja Jangan Banyak-banyak :v\n";

    for (r=1;r<=6;r++)
     { cout<<"Masukkan Huruf ke "<<r<<" = ";gets(nm[r]);
       if (r>1)
        { for (s=1;s<=(r-1);s++)
           { z=(strcmp(nm[r], nm[s]));
               if (z<=0)
                { strcpy (temp, nm[r]);
                  for (k=(r-1);k>=s;k--)
                   { m=(k+1);
                     strcpy (nm[m], nm[k]);
                   }
                  strcpy (nm[s], temp);
                }
           }
        }
      }
    cout<<"\nHasil Pengurutan-nya Adalah : \n";
    for (r=1;r<=6;r++)
     { cout<<"\n"<<nm[r];}
return 0;
}
