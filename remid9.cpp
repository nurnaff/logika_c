#include<stdio.h>
#include<conio.h>
main() {
int t=5,b=-5,i=1;
do{
    if(i%2==0) {
               printf(" %d",b); b-=5;} else {
             printf(" %d",t);  t-=5; }
    i++;
} while(i<=5);
getch();
}
