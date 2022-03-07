#include <stdio.h>

void main()
{

    int num, f = 1, i = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        f = f * i;
        i++;
    }
    printf("The factorial is : %d", f);
}