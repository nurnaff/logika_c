#include<stdio.h>
#include<conio.h>
void main(){
char angka=0;
int i;
for(i=1;i<=100;i++) {
if(i%2==0){
angka+=1;
if(angka<=20)   {
printf(" %d",i);}
}}
getch();
}