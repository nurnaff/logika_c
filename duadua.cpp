#include<stdio.h>
#include<conio.h>
void main() {
int nilai;
char huruf;
printf("Masukkan Nilai: ");scanf("%d",&nilai);
switch(nilai) {
case 1 - 49: {huruf='E'; break;}
case 50 - 59: {huruf='D'; break;}
case 60 - 69: {huruf='C'; break;}
case 70 - 79: {huruf='B'; break;}
case 80 - 100: {huruf='A'; break;}
default: {printf("tidak ada \n");}
}
printf("Huruf= %c",huruf);
getch();
}
