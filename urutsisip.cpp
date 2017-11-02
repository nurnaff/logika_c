#include<stdio.h>
#include<conio.h>
main() {
int x,j,n=10,a[10]={8,10,3,5,4,-1,2,12,11,6};
for(int i=1;i<n;i++) {
 x=a[i];
 j=1;
 while((x>a[j]) && (j<i)) {
  j++;}
 if(x<=a[j]) {
  for(int k=i;i<j+1;k++) {
   a[k]=a[k-1]; }
   a[j]=x;  } 
} 
for(int i=0;i<n;i++) {
 printf(" %d",a[i]); }
getch();
}
