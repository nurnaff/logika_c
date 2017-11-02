#include<stdio.h>
#include<conio.h>
main(){
float hasil;
int a1,a2,pilih;
printf("Masukkan angka ke-1:");scanf("%d",&a1);
printf("Masukkan angka ke-2:");scanf("%d",&a2);
printf("Masukkan pilihan operasi aritmatika: ");scanf("%d",&pilih);
if(pilih==1){
 hasil=a1+a2;
 printf("Hasil Penjumlahan= %f",hasil);}
else if(pilih==2){
 hasil=a1/a2;
 printf("Hasil Pembagian= %f",hasil);}
else if(pilih==3){
 hasil=a1*a2;
 printf("Hasil Perkalian= %f",hasil);}
else {
 hasil=a1-a2;
 printf("Hasil Pengurangan= %f",hasil);}
getch();
}
