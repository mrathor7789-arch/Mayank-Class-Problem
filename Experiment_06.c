/*Name: Mayank Rathor
Batch: F-2
Roll Number: 31
*/

#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    float price;
    int quantity;

    union
    {
        float discount;
        float gst;
    } details;
};

int main()
{
    struct Product p;
    float total, discountAmount, finalBill;

    /* Enter product details */
    printf("Enter Product ID: ");
    scanf("%d", &p.id);

    printf("Enter Product Name: ");
    scanf("%49s", p.name);

    printf("Enter Product Price: ");
    scanf("%f", &p.price);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter Discount Percentage: ");
    scanf("%f", &p.details.discount);

    /* Calculate total amount */
    total = p.price * p.quantity;

    /* Calculate discount */
    discountAmount = total * p.details.discount / 100;

    /* Calculate final bill */
    finalBill = total - discountAmount;

    /* Display product details */
    printf("\n----- Product Details -----\n");

    printf("Product ID: %d\n", p.id);
    printf("Product Name: %s\n", p.name);
    printf("Product Price: Rs. %.2f\n", p.price);
    printf("Quantity: %d\n", p.quantity);

    printf("Total Amount: Rs. %.2f\n", total);
    printf("Discount: %.2f%%\n", p.details.discount);
    printf("Discount Amount: Rs. %.2f\n", discountAmount);
    printf("Final Bill Amount: Rs. %.2f\n", finalBill);

    return 0;
}

// Output of the program 

/* Mayank@Mayanks-MacBook-Pro Mayank Class Problem  % "/Users/Mayank/Github /First-Year-/Co
ntents/Mayank Class Problem /Experiment_06"
Enter Product ID: 201
Enter Product Name: Laptop
Enter Product Price: 100000
Enter Quantity: 4
Enter Discount Percentage: 20

----- Product Details -----
Product ID: 201
Product Name: Laptop
Product Price: Rs. 100000.00
Quantity: 4
Total Amount: Rs. 400000.00
Discount: 20.00%
Discount Amount: Rs. 80000.00
Final Bill Amount: Rs. 320000.00
Mayank@Mayanks-MacBook-Pro Mayank Class Problem  % */