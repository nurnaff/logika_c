#include<stdio.h>
#include<conio.h>
main()
{
    int n=1,i=5,hasil=5;
    while(i>=n) {
                if(i==n) {hasil-=i;
                         printf(" %d",i); printf(" ="); printf(" %d",hasil); }
                         else { hasil-=i;
                         printf(" %d",i); printf(" -"); }
                         i--; }
                         getch();
                         }
