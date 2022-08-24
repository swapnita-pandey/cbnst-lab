#include <stdio.h>
#include <math.h>

void main()
{
    int a,b,c;
    printf("Enter the values of a, b and c: ");
    scanf("%d%d%d", &a,&b,&c);
    float dis = (b*b)-(4*a*c);
    if(dis == 0)
    {
        printf("Equal Roots\n");
        float root = (-b)/(2*a);
        printf("Roots are equal and the value is: %f", root);
    }
    else if(dis > 0)
    {
        printf("Real Roots\n");
        float root1 = (-b + sqrt(dis))/(2*a);
        float root2 = (-b - sqrt(dis))/(2*a);
        printf("Roots are: \nRoot1: %f \nRoot2: %f", root1, root2);
    }
    else
    {
        printf("Imaginary Roots\n");
        float real = -b/(2*a);
        float imag = sqrt(-dis)/(2*a);
        printf("Roots are: \nRoot1: %f i%f \nRoot2: %f i%f", real, imag, real, -imag);
    }
}
