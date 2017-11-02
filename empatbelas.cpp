#include<stdio.h>
#include<conio.h>
void main(){
int a=2,b,c,d,e,f,g;
printf("Masukkan Angka:");scanf("%d",&b);
if(b>a){
 c=b>>a;
 d=b<<a;
 e=b&a;
 f=b|a;}
else {
 c=a>>b;
 d=a<<b;
 e=a&b;
 f=a|b;}
printf("Hasil Pergeseran Bit Kanan: %d\n",c);
printf("Hasil Pergeseran Bit Kiri: %d\n",d);
printf("Hasil AND Bit: %d\n",e);
printf("Hasil OR Bit: %d\n",f);
getch();
}
