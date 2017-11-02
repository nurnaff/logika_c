#include<stdio.h>
#include<conio.h>
main(){
for(int i=1;i<=5;i++){
for(int j=1;j<=5;j++){
if(((i==1)||(i==5))&&(j==3)){ printf("*");}
else if(((i==2)&&(j==2))||((i==2)&&(j==4))) { printf("*"); }
else if(((i==4)&&(j==2))||((i==4)&&(j==4))) { printf("*"); }
else if((i==3) && ((j==1)||(j==5))) { printf("*"); }
else {printf(" ");}
}
printf("\n");}
getch();
}
