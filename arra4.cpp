#include<stdio.h>
#include<conio.h>
main(){
       int a[2][5];
       for(int i=1;i<=2;i++){
               for(int j=1;j<=5;j++) {
               scanf(" %d",&a[i][j]);  }
               printf("\n"); }
       for(int i=1;i<=2;i++){
               for(int j=1;j<=5;j++){
               printf(" %d",a[i][j]); }
               printf("\n"); }
               getch();
               }
