#include <stdio.h>

main(){

    int character;
    /*
        0 = OUTSIDE of word
        1 = INSIDE of word 
    */
    int state = 0;

    while((character = getchar()) != EOF){
        if(character == ' ' || character == '\n' || character == '\t'){
            state = 0;
            printf("\n");
        }else if(state == 0){
            state = 1;
            printf("%c", character);
        }else if(state == 1 && character != ' ' && character != '\n' && character != '\t'){
            state = 1;
            printf("%c",character);
        }

    }

}


