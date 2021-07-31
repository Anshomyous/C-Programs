#include <stdio.h>

void main(){

    float sal,da,hra,gs;

    printf("Enter the basic salary: ");
    scanf("%f",&sal);

    da = 0.4*sal;
    hra = 0.2*sal;
    gs = da+hra+sal;

    printf("The gross salary is: %f",gs);
}