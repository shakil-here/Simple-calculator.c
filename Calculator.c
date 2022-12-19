#include<stdio.h>
int main ()
{
    float a,b;
    char op;
    printf("Enter value to calculate:\n");
    scanf("%f %c %f",&a,&op,&b);
    switch(op)
    {
        case('+'):
        printf("\a = %.2f",a+b);
        break;

        case('-'):
        printf(" \a = %.2f",a-b);
        break;

        case('*'):
        printf(" \a = %.2f",a*b);
        break;

        case('/'):
        printf(" \a = %.2f",a/b);
        break;

        default:
        printf("Please enter only number then +,-,*,/ and then another number");
        break;

    }
    return 0;
   getch();
}