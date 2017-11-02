#include<stdio.h>
#include<conio.h>
main(){
int m=66,n;
n=++m;
printf("%d\n",m++);
printf("%d\n",--n);
n=m--;
printf("%d\n",--n);
printf("%d\n",(++m));
printf("%d\n",(m--)-n);
getch();
}
