#include<stdio.h>
#include<conio.h>
void main(){
 int n,a=4;
 printf("Inputkan banyak yang ditampilkan:");scanf("%d",&n);
 for(int i=1;i<=n;i++) {
 printf(" %d",a);
 a+=4; }
 getch();
}