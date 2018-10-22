/*
 * Here are the programming projects set in the book
 * C Programming - A Modern Approach Chapter 2.
 * Author: P Talbot
 *
 * Basic input and output.
 */

#include <stdio.h>

// Print an arrow of * shorter on left side than right.
void ex1(void) 
{
    printf("         *\n");
    printf("        *\n");
    printf("       *\n");
    printf("      *\n");
    printf("*    *\n");
    printf(" *  *\n");
    printf("  *\n");
}

// Approximates the volume of a sphere with pi = 22/7.
float volume_sphere(float radius)
{
    // 4/3 * pi * radius^3
    return (4.0f / 3.0f) * (22.0f / 7.0f) * radius * radius * radius;
}

// volume_sphere() but takes user input.
float volume_sphere_input(void)
{
    float radius;
    printf("Enter a radius : ");
    scanf("%f", &radius);

    // Call original method.
    return volume_sphere(radius);
}

int main(void)
{
    volume_sphere_input();
    return 0;
}
