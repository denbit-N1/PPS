

// Print factorial of a number using recursion


#include<stdio.h>
int fact(int num, int ans)
{
    if (num==0)
    {
        return ans;
    }
    fact(num-1, ans*num);
}

int main()
{
    int num,s,ans=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    s=fact(num, ans);
    printf("The factorial of %d is %d",num,s);
}