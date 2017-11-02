#include<stdio.h>
#include<conio.h>
main(){
int a=2;
for(int i=0;i<6;i++){
 if(i%2==0) {
  printf(" %d",a);  }
 else {
  printf(" -%d",a); }
  a*=2;  }
getch(); }
