#include<stdio.h>

int main()
{
  char univ[40];
  char kota[20];

  printf("Masukkan nama universitas    :");
  scanf("%[^\n]s", univ);

  printf("Masukkan nama kota           :");
  scanf(" %[^\n]s", kota);

  printf("Nama universitas dan alamat  :%s, %s",univ,kota);

  return 0;
}
