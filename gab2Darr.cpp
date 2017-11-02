#include<stdio.h>
#include<conio.h>
main() {
 int a[2][3]={9,6,5,3,2,1},c[5][3],n=3;
 int b[3][3]={3,2,4,1,5,7,3,6,9};
 for(int i=0;i<2;i++) {
  for(int j=0;j<3;j++) {
   printf(" %d",a[i][j]); }
  printf("\n"); }
 for(int i=0;i<3;i++) {
  for(int j=0;j<3;j++) {
   printf(" %d",b[i][j]); }
  printf(" \n"); }
 for(int i=0;i<2;i++){
  for(int j=0;j<n;j++) {
   c[i][j]=a[i][j]; } }
  for(int i=2;i<5;i++){
  for(int j=0;j<n;j++) {
   c[i][j]=b[i-2][j]; } }
 for(int i=0;i<5;i++) {
  for(int j=0;j<n;j++) {
   printf(" %d",c[i][j]); } 
  printf("\n"); }
getch();
}
