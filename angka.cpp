#include<conio.h>
#include<stdio.h>
main() {
int x=0,i,n,a=4,y=3;
scanf(" %d",&n);
for (i=1;i<=n;i++){
 printf(" %d",a);
 x++;
 a+=y;
 if(x==2) {
  x=0;
  y++; }
}
getch();
}
