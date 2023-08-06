#include <stdio.h> 
int main(){

    //This is a comment 

    /*
        This
        Is
        Multiline 
        Comment
    */

   /*   Escape Sequences = Character combination consisting of backslash \
                            followed by a letter or combination of digits.
                            They specify actions within a line or string of text
                            \n = newline
                            \t = tab 
   */
    printf("I \nlike \nPizza! \n\n"); 
    printf(" 1\t2\t3\n 4\t5\t6\n 7\t8\t9\n\n");

    //Problematic: How can i display quots?
    printf("\"I Like Pizza\" - Abraham Lincoln Probably");

    return 0;
} 