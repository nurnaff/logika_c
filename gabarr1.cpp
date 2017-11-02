#include<stdio.h>
#include<conio.h>
main() {
 int n=5,a[5]={1,2,3,4,5},c[10];
 int b[5]={10,9,8,7,6};
 for(int i=0;i<5;i++) {
  printf(" %d",a[i]); }
 printf("\n");
 for(int i=0;i<5;i++) {
  printf(" %d",b[i]); }
 printf(" \n");
 for(int i=0;i<n;i++){
  c[i]=a[i];
  c[i+5]=b[i]; }
 for(int i=0;i<10;i++) {
  printf(" %d",c[i]); }
getch();
}
