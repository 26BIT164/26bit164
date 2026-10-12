#include<stdio.h>
void main()
{
    float B, KB, MB, GB;
    printf("Provide How many Bytes: ");
    scanf("%f",&B);
    KB=B/1024;
    printf("KiloBytes : %.2f\n",KB);
    MB = B/(1024*1024);
    printf("MegaBytes : %.6f\n",MB);
    GB = B/(1024*1024*1024);
    printf("GigaBytes : %.6f",GB);
}
