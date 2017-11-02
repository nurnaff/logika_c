#include<stdio.h>
#include<conio.h>
main() {
int sigma=0,n=5,x=1;
while(x<=n) {
 if(x%3==0) {
  sigma+=x; }
 x++; }
printf(" %d",sigma);
getch();
}
