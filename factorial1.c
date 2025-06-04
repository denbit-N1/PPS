

// Print factorial of a number using loop


#include<stdio.h>
int main()
{
    int num,s,i,ans=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        ans=ans*i;
    }
    printf("The factorial of %d is %d",num,ans);
}