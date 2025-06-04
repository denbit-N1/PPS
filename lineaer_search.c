

// linear serarch 


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
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            printf("This number position is : %d",i);
            break;
        }
    }
    if(i==n && arr[n-1]!=num)
    {
         printf("This number not present in this array.");
    }

}