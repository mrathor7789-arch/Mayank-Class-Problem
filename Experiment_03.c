/*Name: Mayank Rathor
Batch: F-2
Roll Number: 31
*/

#include<stdio.h>

int balance = 10000;
int amount = 0;
int transaction = 0;

void show_balance();
void deposit();
void withdraw();


void show_balance(){
    printf("Your Current Balance: %d\n", balance);
    transaction++;
}

void deposit(){
    printf("Enter the amount to deposit: ");
    scanf("%d", &amount);
    balance += amount;
    transaction++;
    printf("Your Current Balance: %d\n", balance);
}

void withdraw(){
    printf("Enter the amount to withdraw:");
    scanf("%d", &amount);
    if(amount > balance){
        printf("Insufficient Balance\n");
    }
    else{
        balance -= amount;
        transaction++;
    }
    printf("Your Current Balance: %d\n", balance);
}

int main()
{
    int choice;
    printf("-------------- MINI BANKING SYSTEM --------------\n");
    printf("1. Show Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Transaction History\n");
    printf("5. Exit\n");
    
    
    do{
         printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            show_balance();
            break;

        case 2:
            deposit();
            break;

        case 3:
            withdraw();
            break;
        
        case 4:
            printf("Total Transactions: %d\n", transaction);
            break;

        case 5:
            printf("Thank you for using our banking system!\n");
            break;
        
        default:
            printf("Invalid choice!\n");
            break;
        }
    }while(choice != 5);  

    return 0;
}

// Output of the program 

/*  Mayank@Mayanks-MacBook-Pro Mayank Class Problem  % "/Users/Mayank/Github /First-Year-/Contents/Mayank Class Problem /Experiment_03"
-------------- MINI BANKING SYSTEM --------------
1. Show Balance
2. Deposit
3. Withdraw
4. Transaction History
5. Exit
Enter your choice: 1
Your Current Balance: 10000
Enter your choice: 2
Enter the amount to deposit: 6000
Your Current Balance: 16000
Enter your choice: 3
Enter the amount to withdraw:4000
Your Current Balance: 12000
Enter your choice: 4
Total Transactions: 3
Enter your choice: 5
Thank you for using our banking system!
Enter your choice: 6
Invalid choice!
Enter your choice: 7
Invalid choice!
Enter your choice: 1
Your Current Balance: 12000 */