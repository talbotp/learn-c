/*
 * Simple functions that are used to count number of input character and number 
 * of input lines etc.
 */
#include <stdio.h>

/*
 * Count the number of characters in the first x_lines of input.
 * We exclude \n the new line character from our count.
 */
void count_chars_x_lines(int x_lines)
{
    long n_char = 0, n_new_lines = 0;
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            if (++n_new_lines == x_lines)
                break;

            continue;
        }
        ++n_char;
    }

    printf("%ld\n", n_char);
}

/*
 * Enforce the user to type in x_lines number of lines before allowing them to
 * continue. I can't imagine this being useful lol.
 */
void count_lines_x_lines(int x_lines)
{
    long n_lines = 0;
    int c;    

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++n_lines;
            
            // Max number of lines considered.
            if (n_lines == x_lines)
                break;
        }
    }
    
    printf("%ld\n", n_lines);
}

int main(void)
{
    count_chars_x_lines(2);
    
    printf("Next method\n");
    
    count_lines_x_lines(5);
    
    return 0;
}
