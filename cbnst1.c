#include <stdio.h>
#include <math.h>
#define EPSILON 0.001

float func (float x)
{
    float y = (x*x*x) - (x*x) + 2;
    //printf("%f\n",y);
    return y;
}

void bisection(float a, float b)
{
    printf("%f %f", a,b);
    float c=a;
    
        if(func(a) * func(b) > 0)
        {
            printf("Incorrect Initial Guess\n");
            return;
            //break;
        }
        else if(func(a) * func(b) == 0)
        {
            printf("Root is either %f or %f\n", a, b);
            if(func(a) == 0)
            {
                printf("Root is %f\n", a);
            }
            else
            {
                printf("Root is %f\n", b);
            }
            return;
           
        }
        printf("%f %f", a,b);
        while((b-a) >= EPSILON){
            //printf("%d %d", a,b);
            c = (a + b)/2.0;
            printf("Mid point is %f\n", c);
            if(func(c) == 0.0)
            {
                printf("Root is %f\n", c);
                break;
            }
            else if(func(a) * func(c) < 0)
            {
                b = c;
                //bisection(a,b);
            }
            else
            {
                a = c;
                //bisection(a,b);
            }
            
            
        }
    printf("%f ", c);
}

int main()
{
    float a, b;
    printf("f(x) = x^3 - x^2 + 2\n");
    printf("Enter the interval (values of a and b): ");
    scanf("%f %f", &a, &b);
    printf("%f %f", a,b);
    //bisection(a, b);
    bisection(-200, 300);
    return 0;
}
