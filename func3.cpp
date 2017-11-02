#include<stdio.h>
#include<conio.h>
void kali();
void bagi();
void tambah();
void kurang();
int ang1,ang2;
float has;
main() {
 int a;
 printf("Silahkan Pilih: \n");
 printf("1. Perkalian\n");
 printf("2. Perbagian\n");
 printf("3. Perjumlahan\n");
 printf("4. Perkalian\n");scanf("%d",&a);
 if(a==1) { kali();}
 else if(a==2) { bagi();}
 else if(a==3) { tambah(); }
 else if(a==4) { kurang(); }
getch(); }
void kali() {
 printf("Angka 1:");scanf(" %d",&ang1);
 printf("Angka 2:");scanf(" %d",&ang2);
 has=ang1*ang2;
 printf("Hasil: %g",has); }
void bagi() {
 printf("Angka 1:");scanf(" %d",&ang1);
 printf("Angka 2:");scanf(" %d",&ang2);
 has=ang1/ang2;
 printf("Hasil: %f",has); }
void tambah() {
 printf("Angka 1:");scanf(" %d",&ang1);
 printf("Angka 2:");scanf(" %d",&ang2);
 has=ang1+ang2;
 printf("Hasil: %d",has); }
void kurang() {
 printf("Angka 1:");scanf(" %d",&ang1);
 printf("Angka 2:");scanf(" %d",&ang2);
 has=ang1-ang2;
 printf("Hasil: %d",has); }
