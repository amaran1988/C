#include <stdio.h>
#include <stdlib.h>


int main(){

  int amtOfNumbertostore;

  printf("How many numbers to store: ");

  scanf("%d",&amtOfNumbertostore);

  int * pRandomNumbers;

// Dynamic memory allocation

  pRandomNumbers = (int *) malloc(amtOfNumbertostore * sizeof(int));

  if(pRandomNumbers != NULL){

      int i = 0;

      printf("Enter a Number or Quit: ");

      while(i < amtOfNumbertostore && scanf("%d",&pRandomNumbers[i]) == 1){

          printf("Enter a number or Quit: ");

          i++;

      }

      printf("\n\n\nYou entered the following numbers: \n\n");

      for(int j = 0; j < i; j++){

          printf("%d\n", pRandomNumbers[j]);

      }

  }

  free(pRandomNumbers); // free from the allocated memory - V.V.important

  return 0;

}

