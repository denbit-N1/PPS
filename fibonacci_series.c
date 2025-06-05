

// print fibonacci series upto n term


#include<stdio.h>
#include<conio.h>
int main()
{
    int t1,t2,next,n,i;
    printf("Enter the number when stop : ");
    scanf("%d",&n);
    t1 = 0;
    t2 = 1;
    printf("Fibonacci series of 0 to %d is : %d %d ",n,t1,t2);
    for ( i = 3; i <= n; i++)
    {
        next = t1 + t2;
        printf("%d ",next);
        t1 = t2;
        t2 = next;
    }
    return 0;
}