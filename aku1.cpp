#include<stdio.h>
#include<conio.h>
main(){
int a=15;
for (int i=0;i<5;i++){
 if(i==0 && i<=1) {
  printf(" %d",a); }
 else if(i>1 && i<5) {
  printf(" %d",a++); }
}
getch(); }
