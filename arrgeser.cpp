#include<stdio.h>
#include<conio.h>
main() {
 int tem;
 int ar[5]={9,5,3,2,6};
 for(int i=0;i<5;i++) {
printf(" %d",ar[i]); }
printf("\n");
 tem=ar[4];
for(int i=3;i>=-1;i--){
 ar[i+1]=ar[i]; }
ar[0]=tem;
for(int i=0;i<5;i++) {
printf(" %d",ar[i]); }
getch();
}
