/*
 * ============================================
 *   Console Calculator in C
 *   Basic Arithmetic using Switch-Case
 * ============================================
 */

#include <stdio.h>

void printBanner() {
    printf("\n");
    printf("  ╔══════════════════════════════╗\n");
    printf("  ║     CONSOLE CALCULATOR       ║\n");
    printf("  ║   Basic Arithmetic in C      ║\n");
    printf("  ╚══════════════════════════════╝\n");
    printf("\n");
}

void printMenu() {
    printf("  ┌──────────────────────────────┐\n");
    printf("  │  Select an Operation:        │\n");
    printf("  │                              │\n");
    printf("  │   1.  Addition       (+)     │\n");
    printf("  │   2.  Subtraction    (-)     │\n");
    printf("  │   3.  Multiplication (*)     │\n");
    printf("  │   4.  Division       (/)     │\n");
    printf("  │   5.  Modulus        (%%)     │\n");
    printf("  │   0.  Exit                   │\n");
    printf("  │                              │\n");
    printf("  └──────────────────────────────┘\n");
    printf("\n");
}

int main() {
    int choice;
    double num1, num2, result;
    char again;

    printBanner();

    do {
        printMenu();

        printf("  Enter your choice (0-5): ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("\n  ✓ Thank you for using the calculator!\n\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("\n  ✗ Invalid choice! Please enter a number between 0 and 5.\n\n");
            continue;
        }

        printf("\n  Enter first number  : ");
        scanf("%lf", &num1);
        printf("  Enter second number : ");
        scanf("%lf", &num2);

        printf("\n  ─────────────────────────────────\n");

        switch (choice) {

            case 1:  /* Addition */
                result = num1 + num2;
                printf("  %.2lf  +  %.2lf  =  %.2lf\n", num1, num2, result);
                break;

            case 2:  /* Subtraction */
                result = num1 - num2;
                printf("  %.2lf  -  %.2lf  =  %.2lf\n", num1, num2, result);
                break;

            case 3:  /* Multiplication */
                result = num1 * num2;
                printf("  %.2lf  *  %.2lf  =  %.2lf\n", num1, num2, result);
                break;

            case 4:  /* Division */
                if (num2 == 0) {
                    printf("  ✗ Error: Division by zero is not allowed!\n");
                } else {
                    result = num1 / num2;
                    printf("  %.2lf  /  %.2lf  =  %.2lf\n", num1, num2, result);
                }
                break;

            case 5:  /* Modulus (integer only) */
                if ((int)num2 == 0) {
                    printf("  ✗ Error: Modulus by zero is not allowed!\n");
                } else {
                    int mod_result = (int)num1 % (int)num2;
                    printf("  %d  %%  %d  =  %d\n", (int)num1, (int)num2, mod_result);
                    printf("  (Note: Modulus uses integer values)\n");
                }
                break;

            default:
                printf("  ✗ Unexpected error.\n");
                break;
        }

        printf("  ─────────────────────────────────\n\n");

        printf("  Continue? (y/n): ");
        scanf(" %c", &again);
        printf("\n");

    } while (again == 'y' || again == 'Y');

    printf("  Goodbye!\n\n");

    return 0;
}
