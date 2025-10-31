#include <stdio.h>

int main() {
    int choice;
    float balance = 10000, amount, bonus;

    printf("Welcome to the Smart Bank Account Manager\n");

    do {
        printf("\n1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) { // Deposit
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount > 0) {
                bonus = 0;
                if (amount > 25000) {
                    bonus = amount * 0.01;
                    printf("Bonus of %.2f added to your account!\n", bonus);
                    amount += bonus;
                }

                balance = balance + amount - 5;
                printf("₹5 service charge deducted.\n");
                printf("Updated Balance: ₹%.2f\n", balance);
            } else {
                printf("Invalid deposit amount!\n");
            }
        }

        else if (choice == 2) { // Withdraw
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > balance) {
                printf("Not enough balance!\n");
            } else if (amount > 0) {
                balance = balance - amount - 5;
                printf("₹5 service charge applied.\n");
                printf("Updated Balance: ₹%.2f\n", balance);
            } else {
                printf("Invalid withdrawal amount!\n");
            }
        }

        else if (choice == 3) {
            printf("Current Balance: ₹%.2f\n", balance);
        }

        else if (choice == 4) {
            printf("Thank you for banking with us!\n");
        }

        else {
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
