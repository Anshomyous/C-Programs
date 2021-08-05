#include <stdio.h>

void main()
{

    int day, x, y, z, fine;

    printf("Enter the no of days: ");
    scanf("%d", &day);

    x = day < 5;
    y = day > 6 && day < 10;
    z = day >= 10 && day < 30;

    if (x)
    {
        fine = 50;
        printf("The fine is %d paisa", fine);
    }
    else if (y)
    {
        fine = 1;
        printf("The fine is Rs %d", fine);
    }
    else if (z)
    {
        fine = 5;
        printf("The fine is Rs %d", fine);
    }
    else
        printf("Membership cancelled");
}