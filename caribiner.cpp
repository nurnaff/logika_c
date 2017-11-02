#include<stdio.h>
#include<conio.h>
main() {
 int i=0,n=7,a[10]={-3,6,15,18,21,27,32},cari,tengah;
 int temu=0;
 printf("Masukkan data yang dicari: ");scanf(" %d",&cari);
 while(temu==0 && (i<=n)) {
  tengah=(i+n)/2;
  if(a[tengah]==cari) {
   temu=tengah; }
  else if(a[tengah]>cari) {
   n=tengah-1; }
  else if(a[tengah]<cari) { i=tengah+1; } }
 if(temu>0) {
  printf("data ketemu di indeks ke-: %d",temu); }
 else {printf("data tidak ketemu");}
  getch(); }
