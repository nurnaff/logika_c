#include<stdio.h>
#include<conio.h>
main() {
int maks,temp,n=10,a[10]={8,10,3,5,4,-1,2,12,11,6};
maks=n-1;
for(int i=0;i<(n-1);i++) {
 for(int j=0;j<(n-i);j++) {
  if(a[j]>a[maks]) {
   temp=a[maks];
a[maks]=a[j];
a[j]=temp;  }
} 
maks=maks-1;
}
for(int i=0;i<n;i++) {
 printf(" %d",a[i]); }
getch();
}
