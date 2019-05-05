#include <stdio.h>
#include<ctype.h>

int main()
{
    char input,ch;

    do
    {
        puts("Please enter alphabet 'a': ");
        scanf("%c", &input);
        while( input!='\n' && (ch=getchar())!='\n' && ch!= EOF);   // look here

            if(isalpha(input)==0)
            {
                printf("Please input something.\n");
                continue;
            }
            if(input == 'A' || input == 'a')
            {
                printf("Congratulations! You successfully input letter 'a'.");
                return(0);
            }
            else
            {
                printf("That's not letter 'a'.");
            }

    }

