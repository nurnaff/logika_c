#include<stdio.h>
#include<conio.h>
main() {
int t,i,j,n=10,x[10]={8,10,3,5,4,-1,2,12,11,6};
for(i=0;i<n;i++){
t=x[i];
for(j=i-1;j>=0;j--) {
if(t<x[j]){
x[j+1]=x[j];
x[j]=t;  }
else { x[j+1]=t; }
}
}
for(i=0;i<n;i++) {
 printf(" %d",x[i]); }
getch();
}
