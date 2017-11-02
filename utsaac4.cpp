#include<stdio.h>
#include<conio.h>
main() {
int a=10;
for(int i=0;i<5;i++) {
 if(a%2==0) {
  printf(" %d",a*2); 
  a+=5;}
 else {
  printf(" %d",a);
  a+=10; }
}
getch();
}
