#include<stdio.h>
#include<conio.h>
int main() {
       int a=4, i=1;
       while(i<=8) {
                   if(i%2==0){
                              a*=i;                              printf(" -%d",a);  }
                              else
                              { a*=i; printf(" %d",a);  }
                              i++;
                              }
                              getch();
                              return 0;
                              }
