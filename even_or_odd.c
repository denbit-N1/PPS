
// check the number odd or not


#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("This number even number.");
    }
    else
    {
        printf("This number odd number.");
    }
    return 0;
}