#include <stdio.h>

void main()
{

    int a, b, c, d;

    printf("Enter adjacent: ");
    scanf("%d", &a);
    printf("Enter base: ");
    scanf("%d", &b);
    printf("Enter the hypotnuse: ");
    scanf("%d", &c);

    if (a == b && b == c)
        printf("Equilateral triangle");
    else if (a == b && b == c && c == a)
        printf("Isoceles triangle");
    else
        printf("Scalene Triangle");
}