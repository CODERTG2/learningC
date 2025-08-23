#include <stdio.h>

int main() {
    char expression[100];
    printf("Enter an expression: ");
    scanf("%s", expression);
    // printf("You entered: %s\n", expression);
    int num1, num2;
    for (int i = 0; expression[i] != '\0'; i++) {
        switch (expression[i]) {
            case '+':
                sscanf(expression, "%d+%d", &num1, &num2);
                printf("%d\n", num1 + num2);
                return 0;
            case '-':
                sscanf(expression, "%d-%d", &num1, &num2);
                printf("%d\n", num1 - num2);
                return 0;
            case '*':
                sscanf(expression, "%d*%d", &num1, &num2);
                printf("%d\n", num1 * num2);
                return 0;
            case '/':
                sscanf(expression, "%d/%d", &num1, &num2);
                if (num2 != 0) {
                    printf("%d\n", num1 / num2);
                } else {
                    printf("Division by zero error\n");
                }
                return 0;
            default:
                break;
        }
    }
    printf("Invalid expression\n");
}