/*Name: Mayank Rathor
Batch: F-2
Roll Number: 31
*/
//Experiment-07

#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int id;
    char name[50];
    char designation[50];
    float salary;
};

void addEmployee();
void displayEmployees();
void searchEmployee();
void updateEmployee();

int main()
{
    int choice;

    do
    {
        printf("\n====================================\n");
        printf("    OFFICE EMPLOYEE RECORD SYSTEM\n");
        printf("====================================\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Exit\n");
        printf("====================================\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input!\n");
            return 1;
        }

        switch (choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateEmployee();
                break;

            case 5:
                printf("Exiting the program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}

/* Function to add employee */
void addEmployee()
{
    FILE *fp;
    struct Employee emp;

    fp = fopen("employee.dat", "ab");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    if (scanf("%d", &emp.id) != 1 || emp.id <= 0)
    {
        printf("Invalid employee ID!\n");
        fclose(fp);
        return;
    }

    printf("Enter Employee Name: ");
    scanf(" %49[^\n]", emp.name);

    printf("Enter Designation: ");
    scanf(" %49[^\n]", emp.designation);

    printf("Enter Salary: ");
    if (scanf("%f", &emp.salary) != 1 || emp.salary < 0)
    {
        printf("Invalid salary!\n");
        fclose(fp);
        return;
    }

    if (fwrite(&emp, sizeof(emp), 1, fp) == 1)
        printf("\nEmployee record added successfully!\n");
    else
        printf("Error writing employee record!\n");

    fclose(fp);
}

/* Function to display all employees */
void displayEmployees()
{
    FILE *fp;
    struct Employee emp;
    int count = 0;

    fp = fopen("employee.dat", "rb");

    if (fp == NULL)
    {
        printf("No employee records found!\n");
        return;
    }

    printf("\n---------- Employee Records ----------\n");

    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        printf("\nEmployee ID : %d\n", emp.id);
        printf("Name        : %s\n", emp.name);
        printf("Designation : %s\n", emp.designation);
        printf("Salary      : %.2f\n", emp.salary);
        printf("-------------------------------------\n");

        count++;
    }

    if (count == 0)
        printf("No employee records found!\n");

    fclose(fp);
}

/* Function to search employee */
void searchEmployee()
{
    FILE *fp;
    struct Employee emp;
    int id, found = 0;

    fp = fopen("employee.dat", "rb");

    if (fp == NULL)
    {
        printf("No employee records found!\n");
        return;
    }

    printf("\nEnter Employee ID to search: ");

    if (scanf("%d", &id) != 1)
    {
        printf("Invalid employee ID!\n");
        fclose(fp);
        return;
    }

    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        if (emp.id == id)
        {
            printf("\nEmployee Found!\n");
            printf("Employee ID : %d\n", emp.id);
            printf("Name        : %s\n", emp.name);
            printf("Designation : %s\n", emp.designation);
            printf("Salary      : %.2f\n", emp.salary);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nEmployee not found!\n");

    fclose(fp);
}

/* Function to update employee */
void updateEmployee()
{
    FILE *fp;
    struct Employee emp;
    int id, found = 0;

    fp = fopen("employee.dat", "rb+");

    if (fp == NULL)
    {
        printf("No employee records found!\n");
        return;
    }

    printf("\nEnter Employee ID to update: ");

    if (scanf("%d", &id) != 1)
    {
        printf("Invalid employee ID!\n");
        fclose(fp);
        return;
    }

    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        if (emp.id == id)
        {
            printf("\nEnter New Designation: ");
            scanf(" %49[^\n]", emp.designation);

            printf("Enter New Salary: ");

            if (scanf("%f", &emp.salary) != 1 ||
                emp.salary < 0)
            {
                printf("Invalid salary!\n");
                fclose(fp);
                return;
            }

            /* Move back to the beginning of this record */
            if (fseek(fp, -(long)sizeof(emp), SEEK_CUR) != 0)
            {
                printf("Error locating employee record!\n");
                fclose(fp);
                return;
            }

            /* Write updated record */
            if (fwrite(&emp, sizeof(emp), 1, fp) == 1)
                printf("\nEmployee record updated successfully!\n");
            else
                printf("Error updating employee record!\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nEmployee not found!\n");

    fclose(fp);
}

/* Output of the program:
Mayank@Mayanks-MacBook-Pro C++ % "/Users/Mayank/Github /First-Year-/Contents/Mayank Class Problem /C++/Experiment_07"

====================================
    OFFICE EMPLOYEE RECORD SYSTEM
====================================
1. Add Employee
2. Display Employees
3. Search Employee
4. Update Employee
5. Exit
====================================
Enter your choice: 1

Enter Employee ID: 8475566     
Enter Employee Name: Mayank
Enter Designation: HR      
Enter Salary: 2400000 

Employee record added successfully!

====================================
    OFFICE EMPLOYEE RECORD SYSTEM
====================================
1. Add Employee
2. Display Employees
3. Search Employee
4. Update Employee
5. Exit
====================================
Enter your choice: 2

---------- Employee Records ----------

Employee ID : 8475566
Name        : Mayank
Designation : HR
Salary      : 2400000.00
-------------------------------------

====================================
    OFFICE EMPLOYEE RECORD SYSTEM
====================================
1. Add Employee
2. Display Employees
3. Search Employee
4. Update Employee
5. Exit
====================================
Enter your choice: 3

Enter Employee ID to search: 5675667

Employee not found!

====================================
    OFFICE EMPLOYEE RECORD SYSTEM
====================================
1. Add Employee
2. Display Employees
3. Search Employee
4. Update Employee
5. Exit
====================================
Enter your choice: 4

Enter Employee ID to update: 76785   

Employee not found!

====================================
    OFFICE EMPLOYEE RECORD SYSTEM
====================================
1. Add Employee
2. Display Employees
3. Search Employee
4. Update Employee
5. Exit
====================================
Enter your choice: 5
Exiting the program...
Mayank@Mayanks-MacBook-Pro C++ 
*/