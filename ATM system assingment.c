#include <stdio.h>
#include <stdbool.h>

bool login();
void showMenu();
void checkBalance(float balance);
float deposit(float amount, float balance);
float withdraw(float amount, float balance);

int main( ) {
    float balance = 7000;
    int choice;
    float amount;

    if (!login()) {
        return 0;
    }
    do{
        showMenu();
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                printf("Enter amount to deposit:");
                scanf("%f", &amount);
                balance = deposit(amount, balance);
                break;

            case 3:
                printf("Enter amount to withdraw:");
                scanf("%f", &amount);
                balance = withdraw(amount, balance);
                break;

            case 4:
                printf("Exiting system. Thank you for using our ATM services.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

bool login() {
    int storedPIN = 1234;
    int enteredPIN;
    int attempts = 0, maxAttempts = 3;

    while (attempts < maxAttempts) {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPIN);

        if (enteredPIN == storedPIN){
            printf("Login successful.\n");
            return true;
        } else {
            printf("Incorrect PIN.\n");
        }
        attempts++;
    }

    printf("Maximum attempts reached. Access denied.\n");
    return false;
}

void showMenu() {
    printf("\n-----ATM MENU-----\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("------------------\n");
}

void checkBalance(float balance) {
    printf("Your current balance is: %.2f\n", balance);
}

float deposit(float amount, float balance) {
    if (amount <= 0) {
        printf("Invalid deposit amount.\n");
        return balance;
    }

    balance += amount;
    printf("Deposit successful. New balance: %.2f\n", balance);
    return balance;
}

float withdraw(float amount, float balance) {
    if (amount <= 0) {
        printf("Invalid withdrawal amount.\n");
        return balance;
    }

    if (amount > balance) {
        printf("Insufficient balance.\n");
        return balance;
    }

    balance -= amount;
    printf("Withdrawal successful. New balance; %.2f\n", balance);
    return balance;
}
