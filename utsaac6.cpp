#include<stdio.h>
#include<conio.h>
main() {
int j=1, i=2;
for(int k=1;k<=5;k++) {
 for(int l=0;l<5;l++) {
  printf(" %d",j); 
  printf(" %d",i);
  j+=l;
  i+=l;
} }
getch();
}
