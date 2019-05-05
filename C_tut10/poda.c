
#include <stdio.h>
#include <stdlib.h>


int main(){

    char buffer[1000];
    // int randomnumber;

    FILE *pfile;

    // pfile = fopen("randomnumbers.txt","w");
    pfile = fopen("randomnumbers.txt","r+");

// If the file is not open, then it is 1
    if(!pfile){
          printf("Error: Couldn't write to file");
          return 1;
    }

    // for(int i = 0; i < 10; i++){
      // randomnumber = rand() % 100;
      // fprintf(pfile,"%d\n", randomnumber);
//
    // }

    while(fgets(buffer, 1000, pfile) != NULL){

      printf("%s", buffer);

    }

    fputs("Just messing with the file\n",pfile);
    // fseek(pfile, 12, SEEK_SET);
    // SEEK_SET = start from the beginning of the FILE
    // SEEK_CUR = move based on current position
    // SEEK_END = move based on end of file
    // fputs("Ho Ho Ho it is christmas\n",pfile);

    // fseek(pfile, 0, SEEK_SET);

    // fseek(pfile, 0, SEEK_END);

    int numberOfbytes = ftell(pfile);

    printf("Number of bytes in the File: %d\n", numberOfbytes);

    // fseek(pfile, -36, SEEK_CUR);

    printf("Success reading the file\n");


    // while(fscanf(pfile,"%s",buffer) == 1){
//
        // puts(buffer);
//
    // }


    if(fclose(pfile) != 0){
        printf("Error: File not Closed\n");
    }

      return 0;

}
