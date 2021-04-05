#include<stdio.h>
#include<stdlib.h>
#define R  8.31

int main()
{
  int a = 5;
  int b = 10;
  float c;

  printf("konstanta tetapan gas :%.2f ", R);

  printf("\n---------------------------\n");
  printf("|   PROGRAM MENGHITUNG    |\n");
  printf("===========================\n");
  printf("| nilai awal a      :%d    |\n", a);

  a++;
  printf("| Setelah di tambah :%d    |\n", a++);

  --a;
  printf("| Setelah di kurang :%d    |\n", --a);
  printf("===========================\n");
  printf("| nilai awal b      :%d   |\n", b);

  b++;
  printf("| Setelah di tambah :%d   |\n", b++);

  --b;
  printf("| Setelah di kurang :%d   |\n", --b);
  printf("===========================\n");
  c = a + b;
  printf("| Hasil a+b adalah  :%.1f |\n", c);

  c = b / a;
  printf("| Hasil a/b adalah  :%.1f  |\n", c);
  printf("===========================\n");

  return 0;
}
