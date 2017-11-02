#include<stdio.h>
#include<conio.h>
main() {
float tot=0, x=2,xbar;
for(int k=1;k<5;k++) {
 tot+=x; 
}
xbar=tot/4;
printf(" %g",tot);
printf(" %g",xbar);
getch();
}
