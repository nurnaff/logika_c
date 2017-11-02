#include<stdio.h>
#include<conio.h>
main() {
int a=2;
for(int k=0;k<5;k++) {
 for(int l=1;l<=5;l++) {
  printf(" %d",a+l); 
  a+=2;
  l+=1;
} }
getch();
}
