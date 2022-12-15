#include <stdio.h>
#include <math.h>
#define EPSILON 0.001
float func(float x)
{
    float y = (x * x * x) - (x * x) + 2;
    return y;
}
void falsi(float a, float b)
{
if (func(a) * func(b) > 0)
{
printf("Incorrect Initial Guess\n");
return;
}
else if (func(a) * func(b) == 0)
{
printf("Root is either %f or %f\n", a, b);
if (func(a) == 0)
{
printf("Root is %f\n", a);
}
else
{
printf("Root is %f\n", b);
}
return;
}
float c = a;
int count = 0;
for (int i = 0; ((b - a) >= EPSILON) && i < 8; i++)
{
printf("Iteration %d\n", count);
printf("Root lies between %f and %f\n", a, b);
c = (a * func(b) - b * func(a)) / (func(b) - func(a));
printf("f(x%d) = f(%f) = %f\n", count, c, func(c));
printf("\n");
if (func(c)==0.0)
break;
else if (func(c) * func(a) < 0)
b = c;
else
a = c;
count++;
}
printf("\nThe value of root is : %f\n", c);
return c;
}
int main()
{
float a, b;
printf("Swapnita Pandey\nA-19\n2017078\n\n");
printf("Enter the interval (values of a and b): ");
scanf("%f %f", &a, &b);
// printf("%f %f", a, b);
falsi(a, b);
return 0;
}
