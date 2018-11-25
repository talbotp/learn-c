/** 
 * Define structure person
 *
 * Author : P Talbot
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/*
 * person structure stores a pointer to their name and their age.
 */
typedef struct 
{
    char *name;
    short age;
} person;

/*
 * Method to compare the age of two persons.
 * 
 * return x < 0 if p1 is younger than p2, x == 0 if they are the same age,
 * and x > 0otherwise.
 */
bool compare_age(person *p1, person *p2)
{
   return p1->age - p2->age;
}

person *me(void)
{
    person *p = malloc(sizeof(person));
    p->name = "parker";
    p->age = 23;
    return p;
}

/*
 * birthday method to increment age.
 */
void birthday(person *p)
{
    p->age++;
}

/*
 * Print useful information about this person.
 */ 
void tostring(person *p)
{
    printf("Name: %s\t Age: %i\n", p->name, p->age);
}

int main(void)
{
    char *p1_name   = "twat";
    short p1_age      = 17;
    person p1       = {p1_name, p1_age};
    
    char *p2_name   = "dave";
    short p2_age      = 22;
    person p2       = {p2_name, p2_age};
    
    person *m = me();
    tostring(m);
    free(m);
}
