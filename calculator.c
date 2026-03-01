 #include <stdio.h>
 
int main() {
    float num1, num2, result;
    char op;

    // Input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Switch Case
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Addition = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Subtraction = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Multiplication = %.2f\n", result);
            break;

        case '/':
            if(num2 != 0)
                printf("Division = %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero not allowed\n");
            break;

        default:
            printf("Invalid Operator\n");
    }

    return 0;
}