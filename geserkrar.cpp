#include<stdio.h>
#include<conio.h>
main() {
 int tem;
 int ar[5]={9,5,3,2,6};
 tem=ar[0];
for(int i=1;i<5;i++){
 ar[i-1]=ar[i]; }
ar[4]=tem;
for(int i=0;i<5;i++) {
printf(" %d",ar[i]); }
getch();
}
