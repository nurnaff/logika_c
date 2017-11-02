#include<stdio.h>
#include<conio.h>
main() {
int t=0,b=5,i=1;
do{
    if(i%2==0) {
               printf(" %d",b); b++;} else {
             printf(" %d",t);  t--; }
    i++;
} while(i<=6);
getch();
}
