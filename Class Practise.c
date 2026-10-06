#include<stdio.h>

int main()
{
    int n,i;
    long long first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: \n");

    for(int i = 0; i<n; i++)
    {
    if(i<= 1)
        next = i;
    else 
      {
        next = first + second;
        first = second;
        second = next;
     } 
    }
    printf("%lld", next);

    if(i <n-1)
    {
        printf(",");
    }
return 0;

}

// //1.
#include<stdio.h>

int main(){
    int number;
    printf("Enter a number to check weather a number is odd or not: ");
    scanf("%d", &number);
    if(number % 2 == 0)
    {
        printf("%d is an even number\n", number);
    }
    else
    {
        printf("%d is an odd number\n", number);
    }


    return 0;
}

// //2.
#include<stdio.h>

int main(){
    int a, divide;
    printf("Enter a number to check weather it is divisible by 9 or not: ");
    scanf("%d", &a);
    if(a % 9 == 0)
    {
        printf("The number %d is divisible by 9 \n", a);
    }
    else
    {
        printf("The number is not divisible by 9 \n");
    }
    
    return 0;
}

// //3.
#include<stdio.h>

int main(){
    char alphabet;
    printf("Enter the alphabet: ");
    scanf("%c", &alphabet );
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' ||
        alphabet == 'o' || alphabet == 'u' || alphabet == 'A' ||
        alphabet == 'E' || alphabet == 'I' || alphabet == 'O' ||
        alphabet == 'U')
    {
        printf("The alphabet %c is vowel.\n", alphabet);
    }
    else
    {
        printf("The alphabet %c is Consinants.\n", alphabet );
    }
    
    return 0;
}

// //4.
#include<stdio.h>

int main(){
    char name[30];
    int age;
    printf("Enter Your name: ");
    scanf("%s", name);
    printf("Enter Your Age: ");
    scanf("%d", &age);
    if(age >= 18)
    {
        printf("You are eligible to vote, %s.\n", name);
    }
    else
    {
        printf("You are not eligible to vote, %s.\n", name);
    }
    return 0;
}

// //5.
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter Three number:");
    scanf("%d" "%d" "%d", &a, &b, &c);
    if (a>b && a>c)
    {
        printf("The largest number is %d \n", a);
    }
    else if (b>a && b>c)
    {
        printf("The largest number is %d \n", b);
    }
    else
    {
        printf("The largest number is %d \n", c);
    }
    return 0;
}

// //6.
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter Three Number: \n");
    scanf("%d" "%d" "%d", &a, &b, &c);
    if(a<b && a<c)
    {
        printf("%d is trhe smallest number\n", a);
    }
    else if(b<a && b<c)
    {
        printf("%d is the smallest number\n", b);
    }
    else
    {
        printf("%d is the smallest number\n", c);
    }
    
    return 0;
}

// //7.
#include<stdio.h>

int main(){
    int a;

    do
    {
        printf("Enter the number between 0-9: ");
        scanf("%d", &a);

        switch (a)
        {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 0 and 9.\n");
            break;
        }
    } while (a >= 0 && a <= 9);

    return 0;
}

// //8.
#include<stdio.h>

int main(){
    int a,b;
    do{
        printf("Enter two number: \n");
        scanf("%d" "%d", &a, &b);
        printf("Enter the operation to perform: ");

        switch(a)
        {
            case 1:
                printf("The Addition of %d and %d is: %d\n", a, b, a+b);
                break;
                case 2:
                printf("The Subtration of %d and %d is: %d\n", a, b, a-b);
                break;

        }
    }
    

    return 0;
}