#include<stdio.h>
#include<conio.h>
main() {
 int n=5,a[5];
 int ar[5]={9,5,3,2,6};
 for(int i=0;i<5;i++) {
printf(" %d",ar[i]); }
printf("\n");
 a[0]=ar[n-1];
for(int i=1;i<n;i++){
 a[i]=ar[i-1]; }
for(int i=0;i<5;i++) {
printf(" %d",a[i]); }
getch();
}
