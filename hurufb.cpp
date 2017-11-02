#include<stdio.h>
#include<conio.h>
main(){
char hr='x';
int i,n,a=1;
scanf(" %d",&n);
for(i=1;i<=n;i++){
 printf(" %c",hr);
 if((i%2==0) ){
  hr-=2; }
 else if(i==a){
  hr--;
  a+=4; }
 else {hr++;}}
getch();}
