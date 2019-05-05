#include <stdio.h>
#include <stdlib.h>
#include <errno.h> // for error handling

int main(void){

  FILE *pfile;

  pfile = fopen("randomnumber.bin","rb+");

  if(pfile == NULL){

    perror("Error Occured");
    printf("Error code: %d\n", errno);
    pfile = fopen("randomnumber.bin","wb+");
    printf("The file is being created \n\n");

    if(pfile == NULL){
      perror("Error Occured");
      printf("Error code: %d\n", errno);
      exit(1);
    }

  }

    int randomnumbers[20];

    for(int i = 0; i < 20; i++){
        randomnumbers[i] = rand() % 100;
        printf("The index %d has number %d\n", i, randomnumbers[i]);
    }

    fwrite(randomnumbers,sizeof(int),20,pfile);

    long randomIndexNumber;
    int numberAtIndex;

    printf("\nPick a random number for the index: \n");
    scanf("%ld",&randomIndexNumber);

    fseek(pfile, randomIndexNumber*sizeof(int), SEEK_SET); // Since binary file

    fread(&numberAtIndex, sizeof(int), 1, pfile);

    printf("\nThe random number at index %d is %d\n", randomIndexNumber, numberAtIndex);

    fclose(pfile);

    return 0;

}
