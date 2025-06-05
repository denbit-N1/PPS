
//pattern

// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the row number : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%d ",i+1);
        }
        printf("\n");
    }
    
}