

// calculate y=x^n using recursion 


#include<stdio.h>
int power(int x, int n, int ans)
{
    if (n==0)
    {
        return ans;
    }
    power(x, n-1, ans*x);
}
int main()
{
    int x,n,y,ans=1;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("Enter the number power : ");
    scanf("%d",&n);
    y=power(x, n, ans);
    printf("The ans is %d",y);
}