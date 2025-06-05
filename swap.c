

// swap two number without using third variable


#include<stdio.h>
int main()
{
    int a,b;
    printf("Ente the two number which you swap : ");
    scanf("%d%d",&a,&b);
    printf("Befor swap a = %d, b = %d\n",a,b);
    a = a+b-(b=a);
    printf("after swap a = %d, b = %d\n",a,b);
}