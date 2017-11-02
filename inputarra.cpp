#include<stdio.h>
#include<conio.h>
main() {
int nilai[5];
for(int i=0;i<5;i++){
 printf("Nilai ke-%d",i+1);printf(":");scanf("%d",&nilai[i]);
}
for(int i=0;i<5;i++){
 printf(" %d",nilai[i]);
}
getch();
}
