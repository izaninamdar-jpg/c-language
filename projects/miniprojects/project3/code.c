#include <stdio.h>

int main() {
    int choice;
    float balance = 50000.0, amount;

    printf("\n--- ATM  KA MAIN MENU DEKHO---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: ₹%f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance = balance + amount;
                printf("₹%f deposited successfully\n", amount);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("arre re  Insufficient balance\n");
                } else {
                    balance = balance - amount;
                    printf("Please collect your cash: ₹%f\n", amount);
                }
                break;
            case 4:
                printf("Thank you bhai for visiting our ATM. tata tata byee byee\n");
                return 0; 
            default:
                printf("Invalid choice! abe dhakkan Choose a number between 1 and 4 haii.\n");
        }
        return 0;
    }

