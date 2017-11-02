#include<stdio.h>
#include<conio.h>
main(){
 int ind,pos,cari;
 int a[5]={-10,19,13,20,-30};
 printf("Data yang dicari:");scanf(" %d",&cari);
 ind=0;
 while(ind<5 && cari!=a[ind]) {
  ind++; }
 pos=0;
 if(cari==a[ind]) {
  pos=ind; 
  printf("Data di indeks ke-: %d",pos);}
getch(); }
