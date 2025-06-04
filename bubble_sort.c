

// bubble sort

#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the total no of element : ");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter the %d no element : ",i);
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("After sording, the array is : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}