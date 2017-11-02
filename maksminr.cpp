#include<conio.h>
#include<stdio.h>
main() {
int i,j,n;
float ar[100],total,maks,min;
scanf(" %d",&n);
for(i=0;i<n;i++){
 scanf(" %f",&ar[i]);
 total+=ar[i]; }
maks=ar[0];
min=ar[0];
for(j=1;j<n;j++){
 if(ar[j]>maks) 
  maks=ar[j];
 else if(ar[j]<min)
  min=ar[j]; }
printf(" %f",total);
printf(" %f",total/n);
printf(" %f",maks);
printf(" %f",min);
getch();
}
