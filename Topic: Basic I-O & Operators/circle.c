#include <stdio.h>
#include <math.h>

int main()
{
    double radius = 0.0;
    double SquareArea = 0.0;
    double Area = 0.0;
    double Volume = 0.0;
  
    const double PI = M_PI; 

    printf("--- Circle and Sphere Calculator ---\n");

    printf("Enter the radius: ");

    if (scanf("%lf", &radius) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }

  
    SquareArea = 4 * PI * pow(radius, 2); 
    Area = PI * pow(radius, 2); 
    Volume = (4.0 / 3.0) * PI * pow(radius, 3); 

    printf("\n--- Result ---\n");
    
    printf("Radius (r): %.2lf\n", radius);
    printf("PI (%.5lf)\n\n", PI); 


    printf("Surface Area of Sphere: 4 * PI * (r^2) = 4 * %.5lf * (%.2lf^2) = %.2lf \n", 
           PI, radius, SquareArea);
           
    printf("Area of Circle: PI * (r^2) = %.5lf * (%.2lf^2) = %.2lf\n", 
           PI, radius, Area);


    printf("Volume of Sphere: (4/3) * PI * (r^3) = 1.33333 * %.5lf * (%.2lf^3) = %.2lf\n", 
           PI, radius, Volume);

    return 0;
}