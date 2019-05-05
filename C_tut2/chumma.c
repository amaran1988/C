#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;
    int i, len, num;
    len = 1;

    do
    {
        puts("Please enter alphabet 'a': ");
        scanf(" %c", &input);
        for(i=0; i<len; i++)
        {
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
    }
    while(1);
}
