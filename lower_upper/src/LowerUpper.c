/*
 * Here, we have the main for a program that we use to convert lower to upper 
 * and upper to lower cases for input characters.
 *
 * It takes on input the following parameters as argv : 
 *          -u -> for converting to upper case.
 *    OR    -l -> for converting to lower case.
 *
 * To exit the program press Ctrl + c
 *
 * Author: P Talbot
 */
#include <stdio.h> 
#include <ctype.h>

int main(int argc, char* argv[])
{
    /* We terminate if invalid number of arguments, only one valid parameter, 
     * therefor there are two.
     */
    if (argc != 2) {
        printf("Please use only one parameter. (-u or -l)\n");
        return -1;
    }
    
    // If valid we init this in next if/else block.
    char c;   
    
    /* Check for valid parameter entry. Handle invalid case first.
     */
    if (argv[1][0] != '-' || (argv[1][1] != 'u' && argv[1][1] != 'l')) {
        printf("Please use a valid parameter of -u or -l.\n");
        return -1;
    } else {
        c = argv[1][1];
    }
    
    // Now we are ready to convert.
    char current;
    if (c == 'u')
        while ((current = getchar()) != EOF)
            putchar(toupper(current));
    else
        while ((current = getchar()) != EOF)
            putchar(tolower(current));
        
    return 0;   
}

