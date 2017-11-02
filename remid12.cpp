#include<stdio.h>
#include<conio.h>
main() {
int t=10,i=2;
do{
    if(i%2==0) {
               printf(" %d",t); t*=i;} else {
             printf(" -%d",t);  t*=i; }
    i++;
} while(i<=6);
getch();
}
