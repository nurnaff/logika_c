#include<stdio.h>
#include<conio.h>
main() {
int t=15,b=-10,i=1;
do{
    if(i%2==0) {
               printf(" %d",b); b-=10;} else {
             printf(" %d",t);  t-=5; }
    i++;
} while(i<=5);
getch();
}
