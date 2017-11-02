#include<stdio.h>
#include<conio.h>
main(){
 int hari=2540;
 int tahun=hari/365;
 int sisatahun=hari%365;
 int bulan=sisatahun/30;
 int sisahari=sisatahun%30;
 printf(" %d",tahun);
 printf(" %d",bulan);
 printf(" %d",sisahari);
 getch();
}
