#include <stdio.h>

void main()
{

    int x, y, pow = 1, i = 1;

    printf("Enter the base no: ");
    scanf("%d", &x);
    printf("Enter the power no: ");
    scanf("%d", &y);

    while (i <= y)
    {
        pow = pow * x;
        i++;
    }
    printf("The ans is : %d", pow);
}