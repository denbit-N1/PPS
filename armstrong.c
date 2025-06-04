#include<stdio.h>
int main()
{
    int num,rem,temp,anum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp=num;
    while (temp!=0)
    {
        rem=temp%10;
        anum=anum+(rem*rem*rem);
        temp=temp/10;
    }
    if (anum==num)
    {
        printf("This number is armstrong number.");
    }
    else
    {
        printf("This number not armstrong number.");
    }
    return 0;  
}