#include<stdio.h>
#include<conio.h>
main(){
 int nilai[3]={75,65,80};
 int min,mak,tot;
 float rata;
 for(int i=0;i<3;i++){
         printf(" %d",nilai[i]); }
 min=nilai[0];
 mak=0;
 tot=0;
 for(int i=0;i<3;i++){
         if(nilai[i]<min) {min=nilai[i]; }         }
 for(int i=0;i<3;i++){
         if(nilai[i]>mak) {mak=nilai[i]; }         }    
 for(int i=0;i<3;i++){
         tot+=nilai[i];         }     
 rata=tot/3;
 printf("\n");
 printf("Nilai Minimum: %d\n",min);
 printf("Nilai Maksimum %d\n",mak);
 printf("Nilai Rata-rata %f\n",rata);
 getch();
}
