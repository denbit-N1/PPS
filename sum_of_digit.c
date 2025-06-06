

// sum of digit 

#include<stdio.h>
int digit(int num, int sum)
{
    if (num==0)
    {
        return sum;
    }
    sum = sum + (num % 10);
    digit(num/10, sum);
}
int main()
{
    int num,s,sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    s=digit(num, sum);
    printf("The sum of %d is %d",num,s);
}