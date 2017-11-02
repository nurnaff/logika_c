#include<stdio.h>
#include<conio.h>
main() {
int a[5]={8,10,-1,3,-4},n=5,tmp;
for (int i=0;i<n-1;i++){
for (int j=n-1;j>i;j--) {
if (a[j] <a[j-1]) {
tmp=a[j];
a[j]=a[j-1];
a[j-1]=tmp; } } }
for (int i=0;i<n;i++) {
 printf(" %d",a[i]); }
getch();
}
