#include<stdio.h>
#include<conio.h>

main(){
int a;
printf("Masukkan Pilihan 1-5=");scanf("%d",&a);
switch(a)
{ case 1:
   {printf("Anda Memilih Angka 1 \n"); break;}
  case 2:
   {printf("Anda Memilih Angka 2 \n"); break;  }
  case 3:
   {printf("Anda Memilih Angka 3 \n"); break;      }
  case 4:
   {printf("Anda Memilih Angka 4 \n"); break;     }
  case 5:
   {printf("Anda Memilih Angka 5 \n"); break;    }
  default:
   {printf("Pilihan tidak tersedia \n"); break; }
}
getch();
}
