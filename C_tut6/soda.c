#include <stdio.h>

typedef struct product{

  const char *name;
  float price;
  struct product *next;

} product ;

void printLinkedList(product *pProduct){

  int i = 0;

  while (pProduct != NULL){

      printf("%d. A %s costs %.2f\n\n", i+1,
      (*pProduct).name,pProduct->price);
      i++;
      pProduct = pProduct->next;
  }

}

void main(){

  printf("\n");

  product tomato = {"tomato" , .51,  NULL};
  product potato = {"potato" ,1.21,  NULL};
  product lemon  = {"lemon"  ,1.69,  NULL};
  product milk   = {"milk"   ,3.09,  NULL};
  product turkey = {"turkey" ,1.86,  NULL};

  tomato.next = &potato;
  potato.next = &lemon;
  lemon.next = &milk;
  milk.next = &turkey;

  product apple = {"Apple",1.58,NULL};

  lemon.next = &apple;
  apple.next = &milk;

  printLinkedList(&tomato);

}
