#include<stdio.h>
#include<conio.h>
main(){
int a=5,b=3;
for(int i=0;i<6;i++){
 if(i%2==0) {
  printf(" %d",a);
  a-=2; }
 else {
  printf(" %d",b);
  b+=2; } }
getch(); }
