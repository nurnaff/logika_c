#include<stdio.h>
#include<conio.h>
main() {
int t=3,i=1;
do{
    if(i%2==0) {
               printf(" %d",t); t*=3;} else {
             printf(" -%d",t);  t*=3; }
    i++;
} while(i<=5);
getch();
}
