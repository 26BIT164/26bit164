#include<stdio.h>
void main()
{
    float dollar,rupees,pound;
    printf("Provide Dollars: ");
    scanf("%f",&dollar);
    rupees = dollar*48;
    printf("Rupees is : %.2f\n",rupees);
    pound = rupees/70;
    printf("Pounds is : %.2f",pound);

}
