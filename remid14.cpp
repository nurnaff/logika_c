#include<stdio.h>
#include<conio.h>
main() {
int t=0,b=15,i=1;
do{
    if(i%2==0) {
               printf(" %d",t); t-=5;} else {
             printf(" %d",b);  b+=5; }
    i++;
} while(i<=6);
getch();
}
