

// Find the maximum value of three number using conditionla operator


#include<stdio.h>
int main()
{
    int a,b,c,ans;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    ans=(a>b)?((a>c)?a:c):(b>c)?b:c;
    printf("The maximum value is %d",ans);
    return 0;
}