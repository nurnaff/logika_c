#include<stdio.h>
#include<conio.h>
main() {
int a=5;
for(int k=0;k<5;k++) {
 for(int l=1;l<=5;l++) {
  printf(" %d",a); 
  a+=k;
  k+=l;
} }
getch();
}
