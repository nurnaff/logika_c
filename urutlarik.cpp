#include<stdio.h>
#include<conio.h>
main() {
int temp,n=10,a[10]={8,10,3,5,4,-1,2,12,11,6};
for(int i=0;i<(n-1);i++) {
 for(int j=i+1;j<n;j++) {
  if(a[i]>a[j]) {
   temp=a[i];
a[i]=a[j];
a[j]=temp;  }
} }
for(int i=0;i<n;i++) {
 printf(" %d",a[i]); }
getch();
}
