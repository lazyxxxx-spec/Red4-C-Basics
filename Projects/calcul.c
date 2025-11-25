#include <stdio.h>

int main()
{
    char operator;
    double num1, num2, sum = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &num1);


    printf("Enter The operator: ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

 switch(operator)
{
	case '+':
	sum = num1 + num2;
	break;
	
	case '-':
	sum = num1 - num2;
	break;
	
	case '*':
	sum = num1 * num2;
	break;
	
	case '/':
		if (num2 != 0) {
		sum = num1 / num2;
		
	}
	
	else{
	    printf("error calculating (reason sec num = 0)\n");
	    return 0;
	    }
	 break;
	
	default:
	    printf("Error: operator invalid operator\n");
	    return 1;
    }

    printf("Your sum is %.2lf\n", sum);
    return 0;
}