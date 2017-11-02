#include<conio.h>
#include<stdio.h>
main() {
int x=2,i,n;
char a='B',hr='P';
scanf(" %d",&n);
for (i=1;i<=n;i++){
 if(i%4==0){
  printf(" %c",hr);
  a-=x;
  hr++; }
 else {
  printf(" %c",a);
  a++; }
}
getch();
}
