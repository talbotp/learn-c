/**
 * Messing around with some basic structures.
 * Author: P Talbot
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} point;

/**
 * Factory method to make a point with (x,y) = (0,0).
 */
void make_origin(point* p)
{
   p->x = 0;
   p->y = 0;
}   


int main(void)
{
    point p1 = {1, 2};
    printf("p1.x = %i\n", p1.x);
    printf("p1.y = %i\n\n", p1.y);
    
    point* p2;
    p2->x = 3;
    p2->y = 4;
    printf("Now we deal with the pointer to the point.\n\n");
    printf("p2.x = %i\n", p2->x);
    printf("p2.y = %i\n\n", p2->y);
    
    point* origin = malloc(sizeof(point));
   
    
    return 0;
}

