#include<stdio.h>
#include<conio.h>
#include<string.h>
main() {
char kata[50];
int n,i,j,a=0,b=0,c=0;
scanf("%s",&kata);
for(i=0;kata[i];i++){
 a++; }
printf("Jumlah hurufnya=%d\n",a);
printf("Jumlah hurufnya=%d\n",strlen(kata));
getch();
}
