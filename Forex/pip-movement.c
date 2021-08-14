#include <stdio.h>

void main()
{

    float lot, dollar, x, pip;
    printf("Enter the lot size: ");
    scanf("%f", &lot);
    printf("Enter the pip value: ");
    scanf("%f", &pip);

    dollar = lot * 10;
    x = pip * dollar;

    printf("Profit : %f"
           "$\n",
           x);
    system("pause");
}
