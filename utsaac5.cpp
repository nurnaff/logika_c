#include<stdio.h>
#include<conio.h>
main() {
int j=0, x=1;
for(int k=1;k<=5;k++) {
 j+=k;
 x+=j; 
}
printf(" %d",j); 
printf(" %d",x);
getch();
}
