#include <stdio.h>

void main()
{

    int emp = 0, wor_hr, ovr_time, ovr_pay;

    while (emp < 10)
    {
        printf("Enter the working hours: ");
        scanf("%d", &wor_hr);

        if (wor_hr > 40)
        {
            ovr_time = wor_hr - 40;
            ovr_pay = ovr_time * 12;
            printf("Your over time payent is: %d\n", ovr_pay);
        }
        else
            printf("You have to work more harder to get overtime payments\n");

        emp++;
    }
}