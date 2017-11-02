#include<stdio.h>
#include<conio.h>
main(){
int a=15;
for(int i=0;i<6;i++){
 if(i%2==0) {
  printf(" %d",a); 
  a+=5; }
 else {
  printf(" %d",a); 
  a+=10;  } }
getch(); }
