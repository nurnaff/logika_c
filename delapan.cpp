#include<stdio.h>
#include<conio.h>

main() {
int nilai;
char huruf;
printf("Masukkan Nilai: ");scanf("%d",&nilai);
if(nilai<60) {huruf='D';}
else if(nilai<70) {huruf='C';}
else if(nilai<85) {huruf='B';}
else if(nilai<=100) {huruf='A';}
switch(huruf)
{ case 'D':
   printf("Nilai Anda adalah %d\n",nilai);
   printf("Nilai dalam huruf %c\n",huruf);
   printf("Keterangan Nilai Kurang\n");
   break;
  case 'C':
   printf("Nilai Anda adalah %d\n",nilai);
   printf("Nilai dalam huruf %c\n",huruf);
   printf("Keterangan Nilai Cukup\n");
   break;
  case 'B':
   printf("Nilai Anda adalah %d\n",nilai);
   printf("Nilai dalam huruf %c\n",huruf);
   printf("Keterangan Nilai Baik\n");
   break;
  case 'A':
   printf("Nilai Anda adalah %d\n",nilai);
   printf("Nilai dalam huruf %c\n",huruf);
   printf("Keterangan Nilai Sangat Baik\n");
   break;
  default:
   printf("Nilai Anda adalah %d\n",nilai);
   printf("Nilai dalam huruf %c\n",huruf);
   printf("Keterangan Nilai Jelek\n");
   break;
}
getch();
}