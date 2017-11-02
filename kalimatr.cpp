#include<stdio.h>
#include<conio.h>
main(){
 int ai[2][3],ab[3][3],has[2][3];
 ai[0][0]=4;
 ai[0][1]=5;
 ai[0][2]=6;
 ai[1][0]=2;
 ai[1][1]=1;
 ai[1][2]=3;
 ab[0][0]=3;
 ab[0][1]=4;
 ab[0][2]=5;
 ab[1][0]=1;
 ab[1][1]=2;
 ab[1][2]=3;
 ab[2][0]=2;
 ab[2][1]=3;
 ab[2][2]=4;
 for(int i=0;i<2;i++){
  for(int j=0;j<3;j++){
          has[i][j]=0;
   for(int k=0;k<3;k++) {       
    has[i][j]+=(ai[i][k]*ab[k][j]);}  }  }
 for(int i=0;i<2;i++){
  for(int j=0;j<3;j++){
   printf(" %d",has[i][j]);}
   printf("\n"); }
 getch();
}
