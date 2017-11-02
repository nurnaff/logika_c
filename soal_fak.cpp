#include<stdio.h>
#include<conio.h>
main(){
int jum=1,n,i;
scanf(" %d",&n);
for(i=1;i<=n;i++){
 if(i==n){ printf(" %d=",i); }
 else { printf(" %d*",i); }
 jum*=i;
}
printf(" %d",jum);
getch();
}
