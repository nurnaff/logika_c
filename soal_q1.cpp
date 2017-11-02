#include<stdio.h>
#include<conio.h>
main() {
 int a[5][2]={2,4,5,10,3,6,4,8,1,2},at[5][2],c[2][7];
 int b[2][2]={3,5,7,9};
 for(int i=0;i<5;i++) {
  for(int j=0;j<2;j++) {
   at[i][j]=a[i][j]; } }
 for(int i=5;i<7;i++) {
  for(int j=0;j<2;j++) {
   at[i][j]=b[i-5][j]; } }
 for(int i=0;i<2;i++){
  for(int j=0;j<7;j++) {
   c[i][j]=5+at[j][i]; 
   printf(" %d",c[i][j]); } 
  printf("\n"); }
getch();
}
