

// find roots of a quadratic equation


#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,abc,root1,root2,realpart,imaginary;
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    printf("Enter the value of c : ");
    scanf("%f",&c);
    abc= (b*b-4*a*c);
    if (abc>0)
    {
        root1 = (-b + sqrt(abc))/2*a;
        root2 = (-b - sqrt(abc))/2*a;
        printf("root1 = %f, root2 = %f",root1,root2);
    }
    else if (abc==0)
    {
        root1 = (-b + sqrt(abc))/2*a;
        printf("root = %f",root1);
    }
    else
    {
        realpart= -b/2*a;
        imaginary= sqrt(-abc)/2*a;
        printf("root1 = %f+%fi, \nroot2 = %f-%fi",realpart,imaginary,realpart,imaginary);
    }
    return 0;
}