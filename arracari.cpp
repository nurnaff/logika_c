#include<stdio.h>
#include<conio.h>
main() {
 int i,ind=0;
 int ar[5]={9,5,3,2,6}; char c;
 int input;
 printf("Nilai yang dicari: ");scanf("%d",&input);
while((ind<5) && (c='N')) {
 if(ar[ind]==input) {
  i=ind;
  c='Y'; 
  printf("Nilai yang dicari di indeks %d",i); }
 ind++;
}
getch();
}
