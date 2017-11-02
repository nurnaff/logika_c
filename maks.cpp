#include<stdio.h>
#include<conio.h>
main(){
int a=-10,b=15,c=2,d=17;
if((a>b)&&(a>c)&&(a>d)) { printf("Nilai maksimum a: %d",a); }
else if((b>c)&&(b>d)) {printf("Nilai maksimum b: %d",b);}
else if(c>d) {printf("Nilai maksimum c: %d",c);}
else {printf("Nilai maksimum d: %d",d);}
getch();
}
