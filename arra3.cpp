#include<stdio.h>
#include<conio.h>
main(){
       int a[10]={3,6,10,15,2};
       int b[10]={7,15,-2,4,9};
       for(int i=1;i<=5;i++){
               printf(" %d",a[i]);  }
               printf("\n");
       for(int i=1;i<=5;i++){
               printf(" %d",b[i]); }
               printf("\n");
       for(int i=1;i<=5;i++) {
               printf(" %d",a[i]+b[i]);                     }
               printf("\n");
       for(int i=1;i<=5;i++) {
               printf(" %d",a[i]-b[i]);                     }
               getch();
               }
