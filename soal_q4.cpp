#include<stdio.h>
#include<conio.h>
main() {
 int a[2][3]={9,6,5,3,2,1},at[3][2],c[3][5];
 int b[3][3]={3,2,4,1,5,7,3,6,9};
 for(int i=0;i<3;i++) {
  for(int j=0;j<2;j++) {
   at[i][j]=a[j][i]; } }
 for(int i=0;i<3;i++) {
  for(int j=0;j<2;j++) {
   c[i][j]=at[i][j]; } }
 for(int i=0;i<3;i++) {
  for(int j=2;j<5;j++) {
   c[i][j]=b[i][j-2]; } }
 for(int i=0;i<3;i++){
  for(int j=0;j<5;j++) {
   printf(" %d",c[i][j]); } 
  printf("\n"); }
getch();
}
