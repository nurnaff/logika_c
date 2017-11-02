#include<conio.h>
#include<stdio.h>
main() {
int pilihan, sisi, tinggi, jari,alas,  a, b;
float  luas;
printf("Masukkan pilihan: 1. Bujursangkar, 2. Lingkaran, 3. Segitiga, 4. Trapesium: ");scanf(" %d",&pilihan);
switch(pilihan){
case 1: {printf("Masukkan sisi: ");scanf(" %d",&sisi);
         luas=sisi*sisi;
         printf("Luas Bujursangkar: %f",luas);
         break;}
case 2: {printf("Masukkan jari: ");scanf(" %d",&jari);
         luas=0.5*jari*jari;
         printf("Luas Lingkaran: %5.3f",luas);
         break;}
case 3: {printf("Masukkan alas segitiga: ");scanf(" %d",&alas);
         printf("Masukkan tinggi segitiga: ");scanf(" %d",&tinggi);
         luas=0.5*(alas*tinggi);
         printf("Luas Segitiga: %5.3f",luas);
         break;}
case 4: {printf("Masukkan sisi a trapesium: ");scanf(" %d",&a);
         printf("Masukkan sisi b trapesium: ");scanf(" %d",&b);
         printf("Masukkan tinggi trapesium: ");scanf(" %d",&tinggi);
         luas=0.5*(a+b)*tinggi;
         printf("Luas Trapesium: %5.3f",luas);
         break;}
default: {printf("Tidak ada pilihan"); break;}
}
getch();
}
