#include<stdio.h>
#include<conio.h>
main() {
int a=90, b=20, c=50;
if(a>b) {
 if(a>c) {
  printf("Maksimum: %d",a); }
 else {
  printf("Maksimum: %d",c); }
 }
else if(b>c) {
 printf("Maksimum: %d",b); }
else {
 printf("Maksimum: %d",c); }
getch();
}
