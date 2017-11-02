#include<stdio.h>
#include<conio.h>
void main(){
int a=1;int i=1; int b=3;
while(i<=10){
if(i==1) {
 printf(" -%d",a);}
else if(i%2==0) {
 printf(" %d",b);
 b*=3;}
else {
 printf(" -%d",b);
 b*=3;}
 i++;
}
getch();
}