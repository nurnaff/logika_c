#include<stdio.h>
#include<conio.h>
main(){
int a=15,b=10,c=2,d=17;
if(a>b){
  if(a>c){
    if(a>d) { printf("Nilai maksimum a: %d",a); } 
    else { printf("Nilai maksimum d: %d",d); } }
  else if(b>d) 
    { printf("Nilai maksimum b: %d",b); } 
  else    { printf("Nilai maksimum d: %d",d); } }
else if(b>c){
  if(b>d) {printf("Nilai maksimum b: %d",b);}
  else { printf("Nilai maksimum d: %d",d); } }
else if(c>d) {printf("Nilai maksimum c: %d",c);}
else {printf("Nilai maksimum d: %d",d);}
getch();
}
