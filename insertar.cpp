#include<stdio.h>
#include<conio.h>
main() {
int a[5]={-20,-25,8,-10,5},n=5,t;
for(int i=1;i<n;i++){
t=a[i];
for (int j=i-1;j>=0;j--) {
if (t<a[j]){
a[j+1]=a[j];
a[j]=t;  }
//else {
//a[j+1]=t; break; }
} }
for (int i=0;i<n;i++) {
 printf(" %d",a[i]); }
getch();
}
