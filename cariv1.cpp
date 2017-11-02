#include<stdio.h>
#include<conio.h>
main() {
 int a[8]={-9,10,12,15,20,22,27,30},n,ind,cari;
 printf("Masukkan data yang dicari: ");scanf(" %d",&n);
 ind=0;
 while(ind<8 && n!=a[ind]){
  ind++; }
 if(n==a[ind]) {
  printf("Data ditemukan"); }
 else { printf("Data tidak ditemukan"); }
getch(); }
