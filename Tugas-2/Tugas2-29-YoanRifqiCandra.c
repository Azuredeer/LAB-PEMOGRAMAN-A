#include<stdio.h>
#include<stdlib.h>

int main()
{
  int menu, ukuran, banyak_pesanan;
  int harga_minuman, tunai, kurang;
  float total_harga, pengembalian;

  printf("\nSELAMAT DATANG DI AZURE CAFE\n\n");

  printf("===================================\n");
  printf("|   Pilihan Minuman   |   harga   |\n");
  printf("===================================\n");
  printf("| 1. Green tea        |     8000  |\n");
  printf("| 2. Hot Chocolate    |     10000 |\n");
  printf("| 3. Orange Juice     |     10000 |\n");
  printf("| 4. Capuccino        |     12000 |\n");
  printf("| 5. Milk Shake       |     15000 |\n");
  printf("===================================\n");

  do{
  printf("Masukkan pilihan menu :");
  scanf("%d", &menu);
  if(menu < 1 || menu > 5)
    printf("Maaf menu tidak terdaftar\n");
}while(menu < 1 || menu > 5);

  printf("\n");
  printf("=======================\n");
  printf("|   Pilihan Ukuran    |\n");
  printf("=======================\n");
  printf("| 1. Kecil            |\n");
  printf("| 2. Sedang           |\n");
  printf("| 3. Besar            |\n");
  printf("=======================\n");

  do{
  printf("Masukkan pilihan ukuran :");
  scanf("%d", &ukuran);
  if(ukuran < 1 || ukuran > 3)
    printf("Maaf ukuran tidak tersedia\n");
  }while(ukuran < 1 || ukuran > 3);

  printf("Masukkan banyak pesanan :");
  scanf("%d", &banyak_pesanan);

  if(menu == 1)
    harga_minuman = 8000;
  else if(menu == 2)
    harga_minuman = 10000;
  else if(menu == 3)
    harga_minuman = 10000;
  else if(menu == 4)
    harga_minuman = 12000;
  else if(menu == 5)
    harga_minuman = 15000;

  if(ukuran == 1)
    harga_minuman += 0;
  else if(ukuran == 2)
    harga_minuman += 2000;
  else if(ukuran == 3)
    harga_minuman += 4000;

  printf("\n");

  total_harga = harga_minuman * banyak_pesanan;


  printf("Total harga             : Rp. %.1f\n", total_harga);
  printf("Tunai                   : Rp. ");
  scanf("%d", &tunai);

  pengembalian = tunai - total_harga;

  while(pengembalian < 0){
    printf("Uang anda kurang Rp. %.1f\n", pengembalian * -1);
    printf("Masukkan uang tambahan :");
    scanf("%d", &kurang);
    pengembalian += kurang;
  }
  if(pengembalian > 0){
    printf("Pengembalian           : Rp. %.1f\n\n", pengembalian);
  }

  printf("\nTERIMA KASIH SUDAH MEMBELI^-^\n");


  return 0;
}
