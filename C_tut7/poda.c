#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void main(){

  _Bool isaNumber;

  int number, local_num = 0;

  printf("Enter a new number: ");

  isaNumber  = (scanf("%d",&number) == 1);

  while(isaNumber){

    local_num = local_num + number;

    printf("Enter a new Number: ");

    isaNumber = (scanf("%d", &number) == 1);

  }

  printf("The sum of the numbers is: %d\n\n", local_num);


}
