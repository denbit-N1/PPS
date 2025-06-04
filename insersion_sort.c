

// insertion sort 


#include<stdio.h>
int main()
{
    int n,i,k,temp;
    printf("Enter the total no element : ");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter the %d element : ",i);
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        k=i;
        while (k>=0 && arr[k]>arr[k+1])
        {
            temp=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=temp;
            k--;
        }
        
    }
    printf("After the sorted, the arry is : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}