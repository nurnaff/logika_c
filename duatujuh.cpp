#include<stdio.h>
#include<conio.h>
void main() {
int i=1,a=10,b=50;
while(i<=10) {
if(i%2==0) {
printf(" %d",b);
b-=10; }
else {printf(" %d",a);
a+=5;}
i+=1;
}
getch();
}