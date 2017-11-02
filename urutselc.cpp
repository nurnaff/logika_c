#include<stdio.h>
#include<conio.h>
main() {
int ar[5]={9,8,-10,3,2},n=5,min,t;
for (int i=0;i<n;i++){
 min=i;
 for(int j=i+1;j<n;j++) {
  if(ar[j]<ar[min]) {
   min=j; } }
 t=ar[i];
 ar[i]=ar[min]; 
 ar[min]=t;}
for(int i=0;i<n;i++) {
 printf(" %d",ar[i]); }
getch();
}
