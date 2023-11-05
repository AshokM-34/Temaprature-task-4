#include<stdio.h>
int main()
{
    float c,f;
    printf("\n Enter the Temparature in Celsius : ");
    scanf("%f",&c);
    f = (1.8 * c) + 32;
    printf("\n Temperature in Fahrenheit : %f ",f);
    return 0;
}
