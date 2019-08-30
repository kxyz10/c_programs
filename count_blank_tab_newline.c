#include <stdio.h>

#define blank_value 32
#define tab_value 9
#define newline_value 10

main(){
    int num_blank, num_tab, num_newline;
    char current;

    num_blank = 0;
    num_tab = 0;
    num_newline = 0;

    while((current = getchar()) != EOF)
        (int)current;
        printf("%d/n",current);
        printf("%c/n",current);
        if(current == blank_value){
            ++num_blank;
        } else if(current== tab_value){
            ++num_tab;
        }else if(current == newline_value){
            ++num_newline;
        }
    printf("Number of blanks: %d", num_blank);
    printf("Number of tabs: %d", num_tab);
    printf("Number of newlines: %d", num_newline);
}



