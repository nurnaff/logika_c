#include<stdio.h>
#include<conio.h>

main()
{
 int a;
 printf("Masukkan Angka:");
 scanf("%d",&a);
 if((a%2)==0){
  printf(" Bilangan Genap");
 } else
 {
 printf(" Bilangan Ganjil");}
 getch();
}