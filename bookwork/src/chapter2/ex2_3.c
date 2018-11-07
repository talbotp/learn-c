/** 
 * Exercise 2-3 from page 46 of K&R.
 *
 * Create a function which converts strings hex to integer value.
 *
 * Author: P Talbot
 */
#include <stdio.h>
#include <string.h>
#include <math.h>

/*
 * Link to the ASCII table to caclulate these values is here.
 * http://ee.hawaii.edu/~tep/EE160/Book/chap4/subsection2.1.1.1.html
 */
#define     CAPITAL_ASCII_BUFFER            55
#define     NON_CAPITAL_ASCII_BUFFER        87
#define     NUMBER_ASCII_BUFFER             48

// Base 16 for hex.
#define     BASE_16                         16            

int hex_to_int(char hex[]);
int numberifyHex(char hexchar);

/**
 * Method which converts a hex string to integer form. The hex string will be 
 * char array of the form "0x00af" and "00FC1". etc
 *
 * Requires: ASCII character set system.
 */
int hex_to_int(char hex[])
{   
    int initial;
    
    // Check for the optional initial value of 0x or 0X.
    if (hex[1] == 'x' || hex[1] == 'x' && hex[0] == 0)
        initial = 2;
    else
        initial = 0;
    
    int hexvalue = 0;    
    int length = strlen(hex) - 1;
    
    for (int i = length; i > initial - 1; i--
        hexvalue += numberifyHex(hex[i]) * pow(BASE_16, length - i);   
 
    return hexvalue;
}

/**
 * Convert a hex character to an integer, simple helper method.
 * 
 * Using ASCII character sets.
 */
int numberifyHex(char hexchar)
{
    if (hexchar >= '0' && hexchar <= '9')
        return (int) hexchar - NUMBER_ASCII_BUFFER;
    else if (hexchar >= 'A' && hexchar <= 'F')          // Capital values.
        return (int) hexchar - CAPITAL_ASCII_BUFFER;
    else                                                // Non Capital values.
        return (int) hexchar - NON_CAPITAL_ASCII_BUFFER; 
}

int main(void)
{
    char hexstr[] = "0x11F";
    printf("%i\n", hex_to_int("0x000F"));
    return 0;
}

