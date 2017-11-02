#include<stdio.h>
#include<conio.h>
void main() {
int i=1,a=1,b=0,c=1;
while(i<=10) {
printf(" %d",c);
i+=1;
c=a+b;
b=a;
a=c;
}
getch();
}