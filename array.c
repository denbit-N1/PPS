

// add all even number from an array


#include<stdio.h>
int main()
{
    int n,i,j=0,arr[100];
    printf("Enter the number which is the end of even number : ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            arr[j]=i;
            j++;
        }
    }
    printf("All number are : ");
    for ( i = 0; i < j-1; i++)
    {
        printf("%d ",arr[i]);
    }
}