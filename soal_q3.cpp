#include<stdio.h>
#include<conio.h>
main() {
 int a[8]={10,9,8,7,6,5,4,3},c[6][2];
 int b[2][2]={1,2,3,4};
 for(int i=0;i<4;i++) {
  c[i][0]=a[i];
  c[i][1]=a[i+4]; } 
 for(int i=4;i<6;i++) {
  for(int j=0;j<2;j++) {
   c[i][j]=b[i-4][j]; }  }
 for(int i=0;i<6;i++){
  for(int j=0;j<2;j++) {
   printf(" %d",c[i][j]); } 
  printf("\n"); }
getch();
}
