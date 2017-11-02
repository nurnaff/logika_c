#include<stdio.h>
#include<conio.h>
void main() {
int a,b,c;
printf("Masukkan a: ");scanf("%d",&a);
printf("Masukkan b: ");scanf("%d",&b);
printf("Masukkan c: ");scanf("%d",&c);
if(a>b) {
 if(a>c) { printf("Nilai maksimum: %d",a);}
 else   { printf("Nilai maksimum: %d",c);} }
else if(b>c) { printf("Nilai maksimum: %d",b);}
else { printf("Nilai maksimum: %d",c);}
getch();
}
