#include<stdio.h>
#include<conio.h>
void buka();
main() {
 int a=10;
 buka();
 for(int i=1;i<=5;i++){
  a+=5;
  printf(" %d",a);  }
 printf("\n");
 buka();
 getch(); }
void buka() {
 printf("---------------------------\n"); }
