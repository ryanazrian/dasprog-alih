//Program Mencari FPB
#include <stdio.h>
#include <conio.h>

int main()
{
      int a, b, h; //Deklarasi variabel yang digunakan

      printf("Berikan bil pertama : ");
      scanf("%d", &a); //menangkap dan menyimpan nilai dari a

      printf("Berikan bil kedua : ");
      scanf("%d", &b); //menangkap dan menyimpan nilai dari b

      while(h!=0); //penentu batas perulangan
      {
       a = b;
       b = h;
       h = a%b;
      }
      printf("\nFPB : %d", b);
      printf("\n");

      getch();
      return 0;
}
