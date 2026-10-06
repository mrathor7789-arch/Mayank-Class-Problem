/*Name: Mayank Rathor
Batch: F-2
Roll Number: 31
*/

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b, n, i;
    int arr[5];
    int *p;
    int sum = 0;
    float avg;

    /* ------------------ SWAPPING ---------------------- */

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    swap(&a, &b);

    printf("\nAfter swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    /* ------------------ ARRAY OPERATIONS ---------------------- */

    printf("\n\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    if(n < 1 || n > 5)
    {
        printf("Invalid number of elements!");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Pointer points to first array element */
    p = arr;

    printf("\nArray elements using pointers:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    /* ------------------ MODIFY ARRAY ELEMENT ---------------------- */

    printf("\n\nEnter a new value for the first array element: ");
    scanf("%d", p);

    printf("\nModified array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    /* ------------------ SUM AND AVERAGE ---------------------- */

    for(i = 0; i < n; i++)
    {
        sum = sum + *(p + i);
    }

    avg = (float)sum / n;

    printf("\n\nSum of array elements = %d", sum);
    printf("\nAverage of array elements = %.2f", avg);

    /* ------------------ MEMORY ADDRESS ---------------------- */

    printf("\n\nMemory addresses of array elements:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nElement %d", i + 1);
        printf("\nValue = %d", *(p + i));
        printf("\nAddress = %p\n", (void *)(p + i));
    }

    return 0;
}

// Output of the program 

/* Mayank@Mayanks-MacBook-Pro Mayank Class Problem  % "/Users/Mayank/Github /First-Year-/Co
ntents/Mayank Class Problem /Experiment_05"
Enter two numbers: 67
87

Before swapping:
a = 67
b = 87
After swapping:
a = 87
b = 67

Enter the number of elements in the array: 4
Enter 4 elements:
23
45
67
89

Array elements using pointers:
23 45 67 89

Enter a new value for the first array element: 56

Modified array:
56 45 67 89 

Sum of array elements = 257
Average of array elements = 64.25

Memory addresses of array elements:

Element 1
Value = 56
Address = 0x7ff7bb2e7d00

Element 2
Value = 45
Address = 0x7ff7bb2e7d04

Element 3
Value = 67
Address = 0x7ff7bb2e7d08

Element 4
Value = 89
Address = 0x7ff7bb2e7d0c
Mayank@Mayanks-MacBook-Pro Mayank Class Problem  %  */
