#include<stdio.h>
#include<conio.h>
main(){
int jum=0,n,i;
scanf(" %d",&n);
for(i=n;i>=1;i--){
 if(i==1){ printf(" %d=",i); }
 else { printf(" %d+",i); }
 jum+=i;
}
printf(" %d",jum);
getch();
}
