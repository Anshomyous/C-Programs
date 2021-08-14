#include <stdio.h>

void main()
{

    float lot, dollar;

    printf("Enter the lot size: ");
    scanf("%f", &lot);

    dollar = lot * 10;

    printf("In 1 pip movement : %f"
           "$\n",
           dollar);
    system("pause");
}