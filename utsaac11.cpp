#include<stdio.h>
#include<conio.h>
main() {
int tot=0;
for(int k=1;k<5;k++) {
 tot+=k; 
 if(tot==k) {
  printf("sama "); }
 else {
  printf(" tidak sama "); }
}
getch();
}
