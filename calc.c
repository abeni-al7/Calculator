#include <stdio.h>

int main()
{
	double a, b;
	char op;

	printf("Enter the first number: ");
	scanf("%lf", &a);
	printf("\nEnter the operator: ");
	scanf(" %c", &op);
	printf("\nEnter the second number: ");
	scanf("%lf", &b);

	if (op == '+')
		printf("The sum of %.1lf and %.1lf is %.1lf\n", a, b, a + b);
	else if (op == '-')
		printf("The difference between %.1lf and %.1lf is %.1lf\n", a, b, a - b);
	else if (op == '*' || op == 'x' || op == 'X')
		printf("The product of %.1lf and %.1lf is %.1lf\n", a, b, a * b);
	else if (op == '/')
		printf("The quotient of %.1lf and %.1lf is %.1lf\n", a, b, a / b);
	else
		printf("The operator is invalid\n");

	return (0);
}
