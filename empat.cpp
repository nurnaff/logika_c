#include<stdio.h>
#include<conio.h>
main()
{
 int no,nilai;
 char nama[30];
 char huruf;
 printf("No: ");scanf("%d",&no);
 printf("Nama: ");scanf("%s",&nama);
 printf("Nilai: ");scanf("%d",&nilai);
 if(nilai<60) {huruf='D';}
 else if(nilai<70) {huruf='C';}
 else if(nilai<85) {huruf='B';}
 else if(nilai<=100) {huruf='A';}
 printf("No: %d\n",no);
 printf("Nama: %s\n",nama);
 printf("Nilai: %d\n",nilai);
 printf("Huruf: %c\n",huruf);
 getch();
}