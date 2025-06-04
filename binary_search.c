

// binary serarch 


#include<stdio.h>
int main()
{
    int num,i,n,lower,mid,upper;
    printf("Enter the total no of element : ");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter the %d element : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number which you find : ");
    scanf("%d",&num);
    lower=0;
    upper=n-1;
    while (lower<=upper)
    {
        mid=(lower+upper)/2;
        if (arr[mid]==num)
        {
            printf("This number position is %d",mid);
            break;
        }
        else if (arr[mid]>num)
        {
            upper=mid-1;
        }
        else
        {
            lower=mid+1;
        }
    }
    if (arr[mid]!=num)
    {
        printf("This number not present in this array.");
    }
    return 0;
}