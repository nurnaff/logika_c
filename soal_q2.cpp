#include<stdio.h>
#include<conio.h>
main() {
 int ar[10]={2,4,8,6,12,10,16,18,20,24},c[20];
 int a[10]={9,27,18,36,45,1,54,63,81,90};
 for(int i=0;i<10;i++) {
  printf(" %d",a[i]); } 
 printf("\n");
 for(int i=0;i<10;i++) {
  c[2*i]=ar[i];
  c[2*i+1]=a[i]; } 
 for(int i=0;i<20;i++){
  printf(" %d",c[i]); } 
getch();
}
