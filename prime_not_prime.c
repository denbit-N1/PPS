

// Check prime number or not


#include<stdio.h>
int main()
{
    int num,i,condition=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    if (num<=1)
    {
        condition=0;
    }
    else
    {
        for ( i = 2; i <= num/2; i++)
        {
            if (num%2==0)
            {
                condition=0;
                break;
            } 
        }
    }
    
    if (condition==1)
    {
        printf("This number prime number.");
    }
    else
    {
        printf("This number not prime number.");
    }
    return 0;
}