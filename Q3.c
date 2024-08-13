#include <stdio.h>

int main() 
{
    double F, S, result;
    char operator;

    printf("Enter First Number: ");
    scanf("%lf", &F);
    printf("Enter Second Number: ");
    scanf("%lf", &S);
    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    if (operator == '+') 
	{
        result = F+S;
        printf("Your Answer is: %.2lf\n", result);
    } 
	else if (operator == '-') 
	{
        result = F-S;
        printf("Your Answer is: %.2lf\n", result);
    } 
	else if (operator == '*') 
	{
        result = F*S;
        printf("Your Answer is: %.2lf\n", result);
    } 
	else if (operator == '/') 
	{
        if (S != 0) 
		{
            result = F/S;
            printf("Your Answer is: %.2lf\n", result);
        } 
		else 
		{
            printf("Error: Division by zero is not allowed\n");
        }
    } 
	else 
	{
        printf("Error: Invalid operator\n");
    }

    return 0;
}

