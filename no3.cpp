#include<stdio.h>
#include<conio.h>
main(){
int a;
for(int i=1;i<=6;i++){
 a=i*i;
 if(i%2==0) {
  printf(" -%d",a);  }
 else {
  printf(" %d",a);  } }
getch();
}
