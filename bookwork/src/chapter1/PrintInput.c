/**
 * Simple function that is used to print the result of an input up to some
 * character which is given as input.
 * 
 * Author: P Talbot
 */
#include <stdio.h>

/*
 * Method that prints the input character in integer form and character form
 * using putchar().
 */
void print_input(int char_stop)
{
    int current_char;
    
    // Get the current input character in integer form and print it.
    while((current_char = getchar()) != EOF && current_char != '\n')
    {
        printf("Raw : %d\tChar: %c", current_char, putchar(current_char));
    }
}

int main(void)
{
    // Try with newline.
    print_input('\n');
}


