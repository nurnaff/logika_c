#include<stdio.h>
#include<conio.h>
main() {
int a[3][4]={3,5,7,9,1,-3,-5,-7,2,4,6,8};
int b[2][4]={3,5,7,9,2,4,6,8};
int c[5][4];
for (int i=0;i<3;i++) {
 for(int j=0;j<4;j++) {
  c[i][j]=a[i][j]; } }
for (int i=0;i<2;i++) {
 for(int j=0;j<4;j++) {
  c[i+3][j]=b[i][j]; } }
for (int i=0;i<5;i++) {
 for(int j=0;j<4;j++) {
  printf(" %d",c[i][j]); }
  printf("\n"); }
getch();
}
