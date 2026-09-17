#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float discriminant;
    float root1, root2;

    printf("Enter the values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("The roots are: %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);

        printf("The roots are equal: %.2f and %.2f\n", root1, root1);
    }
    else
    {
        printf("The roots are complex.\n");
    }

    return 0;
}