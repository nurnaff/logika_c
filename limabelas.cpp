#include<stdio.h>
#include<conio.h>
void main(){
char angka;
int huruf;
printf("Input nilai:");scanf("%d",&angka);
if(angka<=60){
huruf='D';}
else if(angka<=70) {
huruf='C';}
else if(angka<=85) {
huruf='B';}
else if(angka<=100) {
huruf='A';}
switch(huruf) {
case 'A': printf("Sangat Baik \n"); break;
case 'B': printf("Baik \n"); break;
case 'C': printf("Cukup \n"); break;
case 'D': printf("Kurang \n"); break;
default: printf("Tidak Ada Pilihan \n"); break;
}
getch();
}
