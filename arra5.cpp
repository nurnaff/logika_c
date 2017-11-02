#include<stdio.h>
#include<conio.h>
main(){
       int a[3][4];
       int nilaitot1=0,nilaitot2=0,nilaitot3=0;
       float nilair1,nilair2,nilair3;
       for(int i=0;i<3;i++){
               for(int j=0;j<4;j++) { 
               scanf(" %d",&a[i][j]); }
               printf("\n"); }
       for(int i=0;i<3;i++) {
               nilaitot1=nilaitot1+a[i][1];
               nilaitot2=nilaitot2+a[i][2];
               nilaitot3=nilaitot3+a[i][3]; } 
               nilair1=nilaitot1/3;
               nilair2=nilaitot2/3;
               nilair3=nilaitot3/3;
       printf("No Absen     Nilai UTS       Nilai Tugas     Nilai UAS\n");
       for(int i=0;i<3;i++){
               for(int j=0;j<4;j++){
               printf(" %d ",a[i][j]); }
               printf("\n"); }
       printf("jumlah %d   %d   %d\n",nilaitot1,nilaitot2,nilaitot3);
       printf("rata %f   %f   %f\n",nilair1,nilair2,nilair3);
               getch();
               }
