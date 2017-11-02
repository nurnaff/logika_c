#include<stdio.h>
#include<conio.h>
main(){
 int nilai;
 printf("inputkan nilai: ");
 scanf(" %d",&nilai);
 if((nilai>=86) && (nilai<=100)) printf("A");
 else if((nilai>=75) && (nilai<=85)) printf("AB");
 else if ((nilai>=70) && (nilai<=74)) printf("B");
 else if((nilai>=66) && (nilai<=69)) printf("BC");
 else if((nilai>=56) && (nilai<=65)) printf("C");
 else if((nilai>=40) && (nilai<=55)) printf("D");
 else if((nilai>=0) && (nilai<=39)) printf("E");
 else printf("Tidak ada pilihan");
 getch();
}
