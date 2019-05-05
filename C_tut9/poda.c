#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct product {

  float price;
  char productname[30];
  struct product *next;

};


struct product *pFirstnode = NULL;
struct product *pLastnode = NULL;


void createNewList(){
  struct product *pNewStruct = (struct product *) malloc(sizeof(struct product));

  printf("Enter Product name: ");
  scanf("%s",(pNewStruct)->productname);

  printf("Enter the price of the Product: ");
  scanf("%f",&(pNewStruct)->price);

  pNewStruct -> next = NULL;

  pFirstnode = pLastnode = pNewStruct;
}


void inputData(){

  if(pFirstnode == NULL){

    createNewList();

  } else {

        struct product *pNewStruct = (struct product *) malloc(sizeof(struct product));

        printf("Enter Product name: ");
        scanf("%s",(pNewStruct)->productname);

        printf("Enter the price of the Product: ");
        scanf("%f",&(pNewStruct)->price);

        if(pFirstnode == pLastnode){

              pFirstnode -> next = pNewStruct;
              pNewStruct -> next = NULL;
              pLastnode = pNewStruct;

        } else {

              pLastnode -> next = pNewStruct;
              pNewStruct -> next = NULL;
              pLastnode = pNewStruct;
              }
       }
}


void output(){

    struct product *pProducts = pFirstnode;
    printf("\n\nThe following products have been entered\n");
    int i=0;

    while(pProducts != NULL){
        printf("%d\t%s costs %.2f\n",i+1,pProducts -> productname, pProducts -> price);
        i++;
        pProducts = pProducts -> next;
        }
}

struct product* pProductBeforeProductToDelete;

struct product* searchforProduct(char * productName){

    struct product *pProducts = pFirstnode;

    while(pProducts != NULL){

        int areTheySame = strncmp(pProducts->productname, productName,30);

        if (!areTheySame){ // The strncmp gives 0 if it match so we need to use '!'

            printf("\n\n%s is in the List. The price is %.2f\n\n", pProducts->productname,
          pProducts->price);

          return pProducts;

          }

          pProductBeforeProductToDelete = pProducts;
          pProducts = pProducts->next;

            }

        printf("\n\n%s was not found in the list\n\n", productName);

        return NULL;
}



void removeProduct(char * productName){

    struct product *ProductToDelete = NULL;

    ProductToDelete = searchforProduct(productName);

    if(ProductToDelete != NULL){

        printf("The %s has been removed",productName);

        if(ProductToDelete == pFirstnode){

            pFirstnode = ProductToDelete->next;

        } else {

            pProductBeforeProductToDelete->next = ProductToDelete->next;

        }

        free(ProductToDelete); // To delete that struct from the link
      } else {

          printf("%s is not in the list",productName);
      }
}



int main(){
z
  inputData();
  inputData();

  output();

  searchforProduct("tomato");

  removeProduct("egg");

  output();

  return 0;

}
