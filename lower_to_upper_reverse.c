

// input upper case and output lower case and its reverse

#include<stdio.h>
int main()
{
    char a,s;
    printf("Enter character : ");
    scanf("%c",&a);
    s=("%d",a);
    if (s>96 && s<123)
    {
        s=s-32;
        printf("%c",s);
    }
    else if (s>64 && s<91)
    {
        s=s+32;
        printf("%c",s);
    }
    return 0;
}