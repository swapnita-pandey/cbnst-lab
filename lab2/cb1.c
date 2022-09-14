#include <stdio.h>
#include <math.h>
#define EPSILON 0.001

double func (double x)
{
    float y = (x*x*x) - (x*x) + 2;
    return y;
}

double bisection(float a, float b)
{
    float c;
    if(func(a) * func(b) > 0)
    {
        printf("Incorrect Initial Guess\n");
        return;
    }
    else if(func(a) * func(b) == 0)
    {
        printf("Root is either %d or %d\n", a, b);
        if(func(a) == 0)
        {
            printf("Root is %d\n", a);
        }
        else
        {
            printf("Root is %d\n", b);
        }
        return;
    }

        do{
            c = (a + b)/2;
            //printf("Root is %d\n", c);

            if(func(a) * func(c) < 0)
            {
                b = c;
                //bisection(a,b);
            }
            else if(func(b) * func(c) < 0)
            {
                a = b;
                //bisection(a,b);
            }
            else if(func(c) == 0)
            {
                printf("Root is %d\n", c);
                break;
            }
        }while(func(c) >= EPSILON);
}

int main()
{
    float a, b;
    printf("f(x) = x^3 - x^2 + 2\n");
    printf("Enter the interval (values of a and b): ");
    scanf("%d %d", &a, &b);
    bisection(a, b);
    return 0;
}
