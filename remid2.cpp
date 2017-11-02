#include<stdio.h>
#include<conio.h>
main() {
int t=2,i=1;
do{
    if(i%2==0) {
               printf(" -%d",t); t*=2;} else {
             printf(" %d",t);  t*=2; }
    i++;
} while(i<=5);
getch();
}
