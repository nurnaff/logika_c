#include<stdio.h>
#include<conio.h>
main()
{
    int n,i=1,hasil=1;
    printf("Masukkan banyak angka: ");scanf(" %d",&n);
    while(i<=n) {
                if(i==n) {hasil*=i;
                         printf(" %d",i); printf(" ="); printf(" %d",hasil); }
                         else { hasil*=i;
                         printf(" %d",i); printf(" *"); }
                         i++; }
                        // return 0;
                         getch();
                         }
