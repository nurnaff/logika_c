#include<stdio.h>
#include<conio.h>
main() {
int a[5]={9,8,-10,3,2},n=5,urut,t,k,i;
k=n;
while(k>1) {
 k=k/2;
 urut=1; 
 do {
 for(int j=0;j<(n-k);j++) {
  i=j+k;
  if(a[i]<a[j]) {
   t=a[i];
   a[i]=a[j];
   a[j]=t;
   urut=0; }
 } }while(urut=1); }
for(int i=0;i<n;i++) {
 printf(" %d",a[i]); }
getch();
}
