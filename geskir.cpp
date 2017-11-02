#include<stdio.h>
#include<conio.h>
main() {
 int n=5,a[5];
 int ar[5]={9,5,3,2,6};
 for(int i=0;i<5;i++) {
printf(" %d",ar[i]); }
printf("\n");
 a[n-1]=ar[0];
for(int i=0;i<(n-1);i++){
 a[i]=ar[i+1]; }
for(int i=0;i<5;i++) {
printf(" %d",a[i]); }
getch();
}
