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
//     if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
//     {
//         printf("The alphabet %c is vowel.\n", alphabet);
//     }
//     else
//     {
//         printf("The alphabet %c is Consinants.\n", alphabet );
//     }
    
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int i = 34;
//     int*j = &i;
//     printf("The adress of i is: %p\n", &i);
//     printf("The adress of i is: %p\n", j);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, b, c;

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if(a > b)
//     {
//         if(a > c)
//         {
//             printf("%d is the largest number.", a);
//         }
//         else
//         {
//             printf("%d is the largest number.", c);
//         }
//     }
//     else
//     {
//         if(b > c)
//         {
//             printf("%d is the largest number.", b);
//         }
//         else
//         {
//             printf("%d is the largest number.", c);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, b, c;

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if(a < b)
//     {
//         if(a < c)
//         {
//             printf("%d is the smallest number.", a);
//         }
//         else
//         {
//             printf("%d is the smallest number.", c);
//         }
//     }
//     else
//     {
//         if(b < c)
//         {
//             printf("%d is the smallest number.", b);
//         }
//         else
//         {
//             printf("%d is the smallest number.", c);
//         }
//     }

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int i = 1, j = 0;
//     int odd_number[50];

//     while(i <= 100)
//     {
//         if(i % 2 != 0)
//         {
//             odd_number[j] = i;
//             j++;
//         }

//         i++;
//     }

//     printf("The odd numbers are:\n");

//     for(i = 0; i < j; i++)
//     {
//         printf("%d\n", odd_number[i]);
//     }

//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int a,b,choices;
//     do
//     {
//         printf("Enter two number: \n");
//         scanf("%d" "%d", &a, &b);
//         printf("Enter your choice:\n");
//         printf("1. Addition\n");
//         printf("2. Subtraction\n");
//         printf("3. Multiplication\n");
//         printf("4. Division\n");
//         printf("5. Exit\n");
//         scanf("%d", &choices);
//         switch(choices)
//         {
//             case 1:
//                 printf("The addition of %d and %d is: %d\n", a, b, a + b);
//                 break;
//             case 2:
//                 printf("The subtraction of %d and %d is: %d\n", a, b, a - b);
//                 break;
//             case 3:
//                 printf("The multiplication of %d and %d is: %d\n", a, b, a * b);
//                 break;
//             case 4:
//                 if(b == 0)
//                 {
//                     printf("Division by zero is not allowed.\n");
//                 }
//                 else
//                 {
//                     printf("The division of %d and %d is: %d\n", a, b, a / b);
//                 }
//                 break;
//             case 5:
//                 printf("Exiting the program. Goodbye!\n");
//                 break;
//             default:
//                 printf("Invalid choice! Please try again.\n");
//         }

//     }while(choices != 5);

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int choice, number, i, isprime, original, reverse, remainder, n, first, second, next;
//     printf("Enter the number of terms for Fibonacci series: ");
//             scanf("%d", &n);
//             first = 0;
//             second = 1;
//             printf("Fibonacci Series: ");
//             for(i = 0; i < n; i++)
//             {
//                 if(i <= 1)
//                 {
//                     next = i;
//                 }
//                 else
//                 {
//                     next = first + second;
//                     first = second;
//                     second = next;
//                 }
//                 printf("%d ", next);
//             }
//     return 0;
// }
