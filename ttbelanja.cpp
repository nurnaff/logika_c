#include<stdio.h>
#include<conio.h>
main(){
int unit,total;
printf("Jumlah barang yang dibeli: ");scanf("%d",&unit);
if(unit<=5){
 total=unit*5250; }
else {
 total=unit*4500; }
printf("Total belanja= %d",total);
getch();
}
