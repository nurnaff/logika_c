#include<stdio.h>
#include<conio.h>
main() {
int t=0,b=-1,i=1;
do{
    if(i%2==0) {
               printf(" %d",t); t++;} else {
             printf(" %d",b);  b--; }
    i++;
} while(i<=6);
getch();
}
