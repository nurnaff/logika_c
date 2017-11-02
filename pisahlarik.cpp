#include<stdio.h>
#include<conio.h>
main() {
 int ar[10]={1,2,3,4,5,6,7,8,9,10};
 int a[5],b[5];
for(int i=0;i<5;i++){
 a[i]=ar[i]; }
for(int i=0;i<5;i++){
 b[i]=ar[i+5]; }
for(int i=0;i<5;i++) {
printf(" %d",a[i]); }
printf("\n");
for(int i=0;i<5;i++) {
printf(" %d",b[i]); }
getch();
}
