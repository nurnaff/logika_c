#include<stdio.h>
#include<conio.h>

void main() {
int a=25; int b=40; int c=a & b;
int d=b%a; int f=a|b;
printf("Hasil sisa pembagian angka %d\n",d);
printf("Hasil operasi AND angka %d\n",c);
printf("Hasil operasi OR angka %d\n",f);
printf("Hasil operasi geser ke kanan %d\n",a>>2);
printf("Hasil operasi geser ke kiri %d\n",a<<2);
printf("Penambahan ++ %d\n",a++);
printf("Penambahan ++ %d\n",++a);
printf("Hasil geser kanan %d\n",10>>2);
printf("Hasil geser kiri %d\n",10<<2);
getch();
}