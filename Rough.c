// #include<stdio.h>

// int balance = 10000;
// int amount = 0;
// int transaction = 0;

// void show_balance();
// void deposit();
// void withdraw();


// void show_balance(){
//     printf("Your Current Balance: %d\n", balance);
//     transaction++;
// }

// void deposit(){
//     printf("Enter the amount to deposit: ");
//     scanf("%d", &amount);
//     balance += amount;
//     transaction++;
//     printf("Your Current Balance: %d\n", balance);
// }

// void withdraw(){
//     printf("Enter the amount to withdraw:");
//     scanf("%d", &amount);
//     if(amount > balance){
//         printf("Insufficient Balance\n");
//     }
//     else{
//         balance -= amount;
//         transaction++;
//     }
//     printf("Your Current Balance: %d\n", balance);
// }

// int main()
// {
//     int choice;
//     printf("-------------- MINI BANKING SYSTEM --------------\n");
//     printf("1. Show Balance\n");
//     printf("2. Deposit\n");
//     printf("3. Withdraw\n");
//     printf("4. Transaction History\n");
//     printf("5. Exit\n");
    
    
//     while(1){
//          printf("Enter your choice: ");
//         scanf("%d", &choice);
//        if(choice == 1)
//         {
//             show_balance();
           
//         }
//         else if(choice == 2)
//         {
//             deposit();
            
//         }
//         else if(choice == 3)
//         {
//             withdraw();
            
//         }
//         else if(choice == 4)
//         {
//             printf("Total Transactions: %d\n", transaction);
            
//         }
//         else if(choice == 5)
//         {
//             printf("Thank you for using our banking system!\n");
//             break;
//         }
//         else
//         {
//             printf("Invalid choice!\n");
//             break;
            
//         }
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char alphabet;
//     printf("Enter the alphabet: ");
//     scanf("%c", &alphabet );
//     if (alphabet == 'a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U')
//     {
//         printf("The alphabet %c is vowel.\n", alphabet);
//     }
//     else
//     {
//         printf("The alphabet %c is Consinants.\n", alphabet );
//     }
    
//     return 0;
// }

#include<stdio.h>

int main(){
    int i = 34;
    int*j = &i;
    printf("The adress of i is: %p\n", &i);
    printf("The adress of i is: %p\n", j);

    return 0;
}