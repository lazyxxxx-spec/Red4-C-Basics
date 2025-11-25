#include <stdio.h>

int main()
{
    int celsius, fahrenheit;

    printf("Enter the celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("the fahrenheit of the celsius that you enter is %d", fahrenheit);
}