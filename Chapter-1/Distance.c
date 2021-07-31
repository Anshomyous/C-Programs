#include <stdio.h>

void main(){

    float dist,mtr,ft,inch,cm;

    printf("The distance is: ");
    scanf("%f",&dist);

    mtr=dist*1000;
    ft=dist*3280.84;
    inch=dist*39370.1;
    cm=dist*100000;

    printf("In mtr: %f\n",mtr);
    printf("In ft: %f\n",ft);
    printf("In inch: %f\n",inch);
    printf("In cm: %f",cm);

}