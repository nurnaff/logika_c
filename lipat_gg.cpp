#include<conio.h>
#include<stdio.h>
main() {
int i,x=3,y=2;
for(i=1;i<=9;i++){
if(i<=3){
  printf(" %d",x);
  x+=2;        }
else if(i<=6){
  printf(" %d",y);
  y+=2;        }
}
getch();
}
