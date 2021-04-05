#include<stdio.h>

int main()
{
  // int umur;  //untuk percabangan if if
  int makanan = 5;  //untuk percabangan switch case

/*
  printf("Ketentuan");
  printf("\n1. belum boleh");
  printf("\n2. sudah boleh");
  printf("\nMasukkan umur anda :");
  scanf("%d", &umur);

  //if if
  if(umur<17){
    printf("Belum boleh memiliki KTP\n");
  }
  if(umur>=17){
    printf("Sudah boleh memiliki KTP\n");
  }
*/

  printf("=======================\n");
  printf("|     Menu makanan    |\n");
  printf("=======================\n");
  printf("|  1. Mie goreng aceh |\n");
  printf("|  2. Nasi goreng     |\n");
  printf("|  3. Sate padang     |\n");
  printf("|  4. Sate matang     |\n");
  printf("|  5. Bakso urat      |\n");
  printf("-----------------------\n");
  printf("\nMasukkan makanan yang anda inginkan :");
  scanf("%d", &makanan);

/*
  switch case default
  switch(makanan)
  {
    case 1  : printf("Mie goreng aceh");
    break;

    case 2  : printf("Nasi goreng");
    break;

    case 3  : printf("Sate padang");
    break;

    case 4  : printf("Sate matang");
    break;

    case 5  : printf("Bakso urat");
    break;

    default : printf("Bangunlah dari mimpi!!\n");
  }
*/

  if(makanan == 1){
    printf("Mie goreng aceh");
  }
  else if(makanan == 2){
    printf("Nasi goreng");
  }
  else if(makanan == 3){
    printf("Sate padang");
  }
  else if(makanan == 4){
    printf("Sate matang");
  }
  else if(makanan == 5){
    printf("Bakso urat");
  }
  else
  printf("bangunlah dari mimpi!!");

  return 0;
}
