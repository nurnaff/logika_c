#include<conio.h>
#include<stdio.h>
main(){
int a,b,total;
float diskon;
printf("Masukkan harga barang: ");scanf(" %d",&a);
printf("Masukkan jumlah yang dibeli: ");scanf(" %d",&b);
total=a*b;
if(total==100000)
{diskon=total*0.05;
 printf("diskon= %f",diskon);}
else
{diskon=0;
 printf("diskon= %f",diskon);}
getch();
}
