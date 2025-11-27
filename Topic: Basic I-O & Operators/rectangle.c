#include <stdio.h>

int main()
{
    double length = 0.0;
    double width = 0.0;
    double perimeter = 0.0;


    printf("--- Rectangle Perimeter Calculator ---\n");

    printf("Enter the length (l): ");

    if (scanf("%lf", &length) != 1 || length <= 0) {
        printf("Error: Invalid or non-positive length entered.\n");
        return 1;
    }

   
    printf("Enter the width (w): ");

    if (scanf("%lf", &width) != 1 || width <= 0) {
        printf("Error: Invalid or non-positive width entered.\n");
        return 1; 
    }

    
    // The perimeter formula: P = 2 * (l + w)
    perimeter = 2 * (length + width);

    
    printf("\n--- Result ---\n");

    printf("Length (l): %.2lf\n", length);
    printf("Width (w): %.2lf\n", width);
    printf("Perimeter (P): 2 * (%.2lf + %.2lf) = %.2lf\n", length, width, perimeter);

    return 0;
}