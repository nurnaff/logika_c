#include<stdio.h>
#include<conio.h>
main(){
 int nilai[3][3];
 nilai[0][0]=7;
 nilai[0][1]=4;
 nilai[0][2]=9;
 nilai[1][0]=3;
 nilai[1][1]=4;
 nilai[1][2]=6;
 nilai[2][0]=1;
 nilai[2][1]=2;
 nilai[2][2]=3;
 int min,mak,tot;
 float rata;
 for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
         printf(" %d",nilai[i][j]); }
         printf("\n"); }
 getch();
}
