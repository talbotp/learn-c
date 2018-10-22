/*
 * Here are the programming projects set in the book
 * C Programming - A Modern Approach Chapter 3.
 * Author: P Talbot
 * 
 * Simple programs where we don't worry about wrong input formats
 * too much.
 * 
 * String formatting.
 */

#include <stdio.h>

/*
 * Take input date in form mm/dd/yyyy
 * and return in format yyyy/mm/dd
 */
void swap_date_format(void)
{
    int day, month, year;

    // Look for integers for day, month, year.
    scanf("%d%d%d", &month, &day, &year);
    
    // Print the reformated result
    printf("%d/%d/%d\n", year, month, day);
}

// Format product information given on input.
void product_info(void)  
{
    // Collect all product info for output table.  
    printf("Enter item number: ");
    int item_number;
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    int unit_price;
    scanf("%d", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    int date_day, date_month, date_year;
    scanf("%d %d %d", &date_month, &date_day, &date_year);

    // Now give output table.
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t%d\t\t%d/%d/%d", item_number, unit_price, date_month, date_day, date_year);
}

// Main for basic tests.
int main(void)
{
    product_info();
}
