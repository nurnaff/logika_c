#include<stdio.h>
#include<conio.h>
main() {
int min,n=10,a[10]={8,10,3,5,4,-1,2,12,11,6};
min=a[0];
for(int i=0;i<n;i++) {
  if(a[i]<min) {
   min=a[i]; }  }
printf("Nilai Minimum adalah %d",min); 
getch();
}
