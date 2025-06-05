
//pattern

//       *
//     * * *
//   * * * * *
// * * * * * * *

#include<stdio.h>
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the row number : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
            printf("  ");
        }
        for ( k = j; k < n+i; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    return 0;
}