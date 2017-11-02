#include<stdio.h>
#include<conio.h>
main() {
int j=5;
for(int k=0;k<5;k++) {
 for(int l=1;l<=5;l++) {
  printf(" %d",j); 
  j+=l;
  l+=k;
} }
getch();
}
