#include<stdio.h>
#include<conio.h>
main(){
int i,j,a=10;
for (i=2;i<=4;i++){
 a+=i;
 for(j=5;j<=6;j++) {
  i+=j;
  a+=i; } }
a=a+i+j;
printf(" %d",a); 
getch(); }
