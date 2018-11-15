/**
 * Just messing around with pointers.
 */
#include <stdio.h>

/**
 * Method that reverses a string.
 */
char *mess()
{
    char *str;
    str = "wat";
    return str;
}

/**
 * Trying to swap pointers instead of whole data. 
 */
char *swapstr(char *s1, char *s2)
{
    printf("BEFORE SWAP s1 : %s\n", s1);
    printf("BEFORE SWAP s2 : %s\n", s2);
   
    // Swap here
    printf("1\n");
    char tmp = *s1;
    printf("2\n");
    *s1 = *s2;
    printf("3\n");
    *s2 = tmp;
   
    printf("AFTER SWAP s1 : %s\n", s1);
    printf("AFTER SWAP s2 : %s\n", s2);
}

// Seeing output of these basic methods.
int main(void)
{
    printf("%s\n\n", mess());
    
    char *str1 = "yas";
    char *str2 = "slayyy";
    swapstr(str1, str2);
    
    return 0;
}
