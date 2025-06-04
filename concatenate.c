

// concatenate two strings without using strcat() function


#include<stdio.h>
int main()
{
    char arr1[100]="suvam";
    char arr2[]="samanta";
    int i=0,j=0;
    while (arr1[i]!='\0')
    {
        i++;
    }
    while (arr2[j]!='\0')
    {
        arr1[i] = arr2[j];
        j++;
        i++;
    }
    arr1[i]='\0';
    int k=0;
    printf("%s",arr1);
    return 0;
}