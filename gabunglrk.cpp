#include<stdio.h>
#include<conio.h>
main() {
 int tem,c[10];
 int ar[5]={2,4,6,8,10};
 int arr[5]={1,3,5,7,9};
for(int i=9;i>=5;i--){
 c[i]=ar[i-5]; }
for(int i=0;i<5;i++){
 c[i]=arr[i]; }
for(int i=0;i<10;i++) {
printf(" %d",c[i]); }
getch();
}
