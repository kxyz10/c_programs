#include <stdio.h>

/* print out the input, replacing multiple blanks with a single blank */
main()
{

    int current, previous;
    previous = 'a';
    while((current = getchar()) != EOF)
        if(current == ' '){
            if(previous != ' '){
                printf("%c\n",current);
            }
        }else{
            printf("%c\n",current);
        }
        previous = current;
}
