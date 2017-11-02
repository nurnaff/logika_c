#include<stdio.h>
#include<conio.h>
void main(){
for(int i=1;i<=4;i++){
for(int j=1;j<=4;j++){
if((i==1)||(i==4)){
printf("*");}
else if((i==2)||(i==3)){
if((j==1)||(j==4)){
printf("*");} else{
printf(" ");}     }
else{        printf(" ");}
}
printf("\n");}
getch();}
