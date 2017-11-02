#include<conio.h>
#include<stdio.h>
main() {
int i,a=1,b=1,c=0;
for (i=1;i<=7;i++){
 b=a;
 a=c;
 c=a+b;
 printf(" %d",c); }
getch();
}
