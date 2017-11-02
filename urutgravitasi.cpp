#include<stdio.h>
#include<conio.h>
main() {
int maks,temp,n=10,a[10]={8,10,3,5,4,-1,2,12,11,6};
maks=n;
for(int i=0;i<(n-1);i++) {
 for(int j=0;j<(maks-1);j++) {
  if(a[j]>a[j+1]) {
   temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;  }
} 
maks=maks-1;
}
for(int i=0;i<n;i++){
 printf(" %d",a[i]); }
getch();
}
