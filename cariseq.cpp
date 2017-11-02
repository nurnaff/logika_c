#include<conio.h>
#include<stdio.h>
main(){
int a[10]={-3,6,15,18,21,27,32};
int n=7,cari=18,i=0,indeks;
while(i<n){
if(a[i]==cari){
 indeks=i;  }
i++;}
 printf(" %d",indeks);               
getch();
}
