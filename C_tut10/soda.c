#include <stdio.h>
#include <stdlib.h>
#include <errno.h> // for error handling

int main(void){

  FILE *pfile;
  char * buffer;
  size_t dataInFile;
  long fileSize;

  pfile = fopen("sometext.bin","rb");

  if(pfile == NULL){

    perror("Error Occured");
    printf("Error code: %d\n", errno);
    pfile = fopen("something.bin","wb+");
    printf("The file is being created \n\n");

    if(pfile == NULL){
      perror("Error Occured");
      printf("Error code: %d\n", errno);
      exit(1);
    }

  }

  char name[] = "Amardeep A"; // This is a pointer by default

  fwrite(name, sizeof(name[0]),sizeof(name)/sizeof(name[0]),pfile);

  fseek(pfile,0,SEEK_END);

  fileSize = ftell(pfile);

  rewind(pfile);

  buffer = (char*) malloc(sizeof(char)*fileSize);

  if(buffer ==  NULL){

    perror("Error Occured");
    printf("Error code: %d\n", errno);
    exit(2);

  }

    dataInFile = fread(buffer, 1, fileSize, pfile);

    if(dataInFile != fileSize){

      perror("Error Occured");
      printf("Error code: %d\n", errno);
      exit(3);

    }

    printf("%s\n", buffer);
    printf("\n");

    fclose(pfile);
    free(buffer);

    return 0;

}
