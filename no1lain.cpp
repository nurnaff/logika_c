#include<stdio.h>
#include<conio.h>
main(){
int i,x=1,n;
printf("Banyak: ");scanf(" %d",&n);
for(i=1;i<=n;i++){
printf(" %d",x);
x++;
printf(" -%d",i);
}
getch();
}
