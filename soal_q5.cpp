#include<stdio.h>
#include<conio.h>
main() {
 int a[10]={3,6,9,12,15,18,21,24,27,30},c[10][2];
 int b[10]={1,2,3,4,5,6,7,8,9,10};
 for(int i=0;i<10;i++) {
  for(int j=0;j<2;j++) {
   c[i][0]=a[i];
   c[i][1]=b[i]; } }
 for(int i=0;i<10;i++) {
  for(int j=0;j<2;j++){
   printf(" %d",c[i][j]); } 
  printf("\n"); }
getch();
}
