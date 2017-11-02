#include<stdio.h>
#include<conio.h>
main() {
int a[5]={8,10,-1,3,-4},n=5,tem;
for (int i=0;i<n;i++) {
 for (int j=(n-1);j>i;j--) {
  if(a[j-1]>a[j]) {
   tem=a[j-1];
   a[j-1]=a[j];
   a[j]=tem; } } }
for(int i=0;i<n;i++) {
 printf(" %d",a[i]); }
getch();
}
