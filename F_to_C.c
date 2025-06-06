#include<stdio.h>
int main()
{
    int f,c;
    printf("Enter the temperature in fahrenheit : ");
    scanf("%d",&f);
    c=(5/9*(f-32));
    printf("the temperature in celsius is %d ",c);
    return 0;
}