

// convert decimel to binary


#include<stdio.h>
int main()
{
    int num,rem,i=0,j,arr[100];
    printf("Enter the decimel number : ");
    scanf("%d",&num);
    while (num!=0)
    {
        rem=num%2;
        arr[i]=rem;
        i++;
        num=num/2;
    }
    printf("Decimel number of %d is ",num);
    for ( j = i-1; j >= 0; j--)
    {
        printf("%d",arr[j]);
    }
}