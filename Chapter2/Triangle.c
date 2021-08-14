#include <stdio.h>

void main()
{

    float a, b, h, x;
    printf("Enter the adjacent side: ");
    scanf("%f", &a);
    printf("Enter the base: ");
    scanf("%f", &b);
    printf("Enter the hypotenuse: ");
    scanf("%f", &h);
    x = a + b;

    if (h < x)
        printf("Valid tringle");

    else
        printf("Invalid");
}