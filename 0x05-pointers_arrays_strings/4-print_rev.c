#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string
 */

void print_rev(char *code)
{
    int len =0;

    for (int i =0; i<code[len]; i++){
        len++;
       }
   

    for (len; len>=0; len--){
       _putchar(code[len]);
        }


    _putchar('\n');
}
