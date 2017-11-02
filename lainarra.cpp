#include<stdio.h>
#include<conio.h>
main(){
 int nilai[3][3],balik[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++) {
   nilai[i][j]=balik[j][i]; } }
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++) {
   printf(" %d",nilai[i][j]); } 
   printf("\n");}
getch();
}
 
