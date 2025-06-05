

// check number palindrome or not 
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rem,temp;
    int rev=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp=num;
    while (temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if (rev==num)
    {
        printf("This number palindrome number.");
    }
    else
    {
        printf("This number not palindrome number.");
    }
    return 0;  
}