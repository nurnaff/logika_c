#include<stdio.h>
#include<conio.h>
main() {
 int a[20];
 int n,x=1,y=2,b=11,c=13;
a[0]=1;
scanf(" %d",&n);
for(int i=1;i<n;i++){
 if(i==x){
  a[i]=a[i-1]+3; 
  x+=3; }
 else if(i==y) {
  a[i]=a[i-1]+b;
  b-=2;
  y+=3; }
 else {
  a[i]=a[i-1]-c;
  c-=2; } }
for (int j=0;j<n;j++){
 printf(" %d",a[j]); }
getch(); }
