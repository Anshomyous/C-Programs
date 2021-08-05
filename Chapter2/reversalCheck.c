#include<stdio.h>
void main() {

    int num,a,b,c,d,e,x;

    printf("Enter 5 digit number: ");
    scanf("%d", &num);

    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;
    d=(num/1000)%10;
    e=num/10000;

    x=a*10000+b*1000+c*100+d*10+e;

    

    

      if (x==num){
         printf("Numbers got matched!\n");
      }

      else {
         printf("Not Matched!\n");
      }

}