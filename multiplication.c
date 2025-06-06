

// multiply two numbers without using multiplication operator

#include<stdio.h>
int main()
{
    int x,y,i,ans;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    for ( i = 0; i < y; i++)
    {
        ans = ans + x;
    }
    printf("%d*%d = %d",x,y,ans);
}