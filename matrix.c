

// print diagonal matrix from 5x5 matrix


#include<stdio.h>
int main()
{
    int n,i,j,arr[5][5];
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if (i==j)
            {
                arr[i][j]=1;
            }
            else
            {
                arr[i][j]=0;
            }
        }
    }
    
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    
}