#include<stdio.h>
#include<conio.h>
main() {
int n=6,ar[6]={16,3,-5,9,4,10}; int sisip,j;
for(int i=0;i<n;i++) {
 sisip=ar[i];
 j=i;
 while ((j>=1) && (ar[j-1]>sisip)) {
  ar[j]=ar[j-1];
  j=j-1; }
 ar[j]=sisip; }
for(int i=0;i<n;i++) {
 printf(" %d",ar[i]); }
getch();
}
