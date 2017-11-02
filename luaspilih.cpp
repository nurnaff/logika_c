#include<stdio.h>
#include<conio.h>
main(){
float luas;
int a,b,s,r,t,pilih;
printf("Masukkan pilihan Bangun: ");scanf("%d",&pilih);
if(pilih==1){
 printf("Masukkan sisi:");scanf("%d",&s);
 luas=s*s;
 printf("Luas Bujursangkar= %f",luas);}
else if(pilih==2){
 printf("Masukkan jari-jari:");scanf("%d",&r);
 luas=3.14*r*r;
 printf("Luas Lingkaran= %f",luas);}
else if(pilih==3){
 printf("Masukkan alas:");scanf("%d",&a);
 printf("Masukkan tinggi:");scanf("%d",&t);
 luas=0.5*a*t;
 printf("Luas Segitiga= %f",luas);}
else {
 printf("Masukkan sisi a:");scanf("%d",&a);
 printf("Masukkan sisi b:");scanf("%d",&b);
 printf("Masukkan tinggi:");scanf("%d",&t);
 luas=0.5*t*(a+b);
 printf("Luas Trapesium= %f",luas);}
getch();
}
