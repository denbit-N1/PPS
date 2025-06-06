#include<stdio.h>
int main()
{
    char a,s;
    printf("Enter character : ");
    scanf("%c",&a);
    s=("%d",a);
    if (s>96 && s<123)
    {
        printf("This character is lower case letter.");
    }
    else
    {
        printf("This character is upper case letter.");
    }
    
}