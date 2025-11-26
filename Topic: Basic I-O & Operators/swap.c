#include <stdio.h>

int main()
{
    int a = 20;
    int b = 30;
    int temp;
    printf("before: a = %d & b = %d\n", a, b);
        
    temp = a;
    a = b;
    b = temp;
    printf("after: a = %d & b = %d\n", a, b);

}