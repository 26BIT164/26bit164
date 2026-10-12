#include<stdio.h>
void main()
{
    int a,b,s,m,su;
    float d;
    printf("Enter your numbers: ");
    scanf("%d %d",&a,&b);
    s = a+b;
    printf("The Sum is: %d\n",s);
    m = a*b;
    printf("The Product is: %d\n",m);
    su = a-b;
    printf("The Subtraction is: %d\n",su);
    d = a/b;
    printf("On dividing result is: %.2f",d);
}
