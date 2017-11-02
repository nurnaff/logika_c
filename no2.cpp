#include<stdio.h>
#include<conio.h>
main(){
int a=1, b=-1;
for(int i=1;i<=6;i++){
 if(i%2==0) {
  printf(" %d",b);
  b--;   }
 else {
  printf(" %d",a); 
  a++;} }
getch();
}
