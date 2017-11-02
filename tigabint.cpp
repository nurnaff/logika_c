#include<stdio.h>
#include<conio.h>
void main(){
for(int i=1;i<=3;i++){
for(int j=1;j<=3;j++){
 if(i==3){ printf("*");}
 else if((i==1)&&(j==2)) { printf("*");}
 else if((i==2)&&((j==1)||(j==3))) { printf("*");}
 else {printf(" ");}
 } printf("\n"); }
getch();
}
