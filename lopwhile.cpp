#include<stdio.h>
#include<conio.h>
void main(){
int i=1;
while(i<=10){
if(i%2==0){ printf(" -%d",i); }
else { printf(" %d",i);}
i++;}
getch();
}