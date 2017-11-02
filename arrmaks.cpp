#include<stdio.h>
#include<conio.h>
main() {
int maks,n=10,a[10]={8,10,3,5,4,-1,2,12,11,6};
maks=a[0];
for(int i=0;i<n;i++) {
  if(a[i]>maks) {
   maks=a[i]; }  }
printf("Nilai Maksimum adalah %d",maks); 
getch();
}
