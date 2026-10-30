//Original 

// #include <stdio.h>

// #define MAX_APPLIANCES 20
// #define MAX_SLABS 5
// #define DAYS_PER_MONTH 30.0f

// /* Stores the details and estimated monthly energy for one appliance. */
// typedef struct {
//     char name[40];
//     float watts;
//     int quantity;
//     float hoursPerDay;
//     float monthlyKWh;
// } Appliance;

// /* Each slab has an upper unit limit and a per-unit rate. */
// typedef struct {
//     float upperLimit;
//     float rate;
// } TariffSlab;

// int readAppliances(Appliance appliances[]);
// float calculateBill(float monthlyKWh, TariffSlab slabs[], int slabCount);
// void showEstimate(Appliance appliances[], int count);

// int main(void) {
//     int choice;

//     do {
//         printf("\n=== Home Electricity Bill and Solar Panel Estimator ===\n");
//         printf("1. Estimate household energy, bill, and solar size\n");
//         printf("2. Exit\n");
//         printf("Enter choice: ");
//         scanf("%d", &choice);

//         if (choice != 1 && choice != 2) {
//             printf("Please enter a number. Restart the program and try again.\n");
//             return 1;
//         }

//         if (choice == 1) {
//             Appliance appliances[MAX_APPLIANCES];
//             int count = readAppliances(appliances);
//             if (count > 0) 
//             {
//                 showEstimate(appliances, count);
//             }
//         } 
//         else if (choice != 2 && choice != 1)
//         {
//             printf("Invalid choice. Select 1 or 2.\n");
//         }
//     } while (choice != 2);

//     printf("Goodbye.\n");
//     return 0;
// }

// int readAppliances(Appliance appliances[]) {
//     int count;

//     printf("\nHow many appliance types? (1-%d): ", MAX_APPLIANCES);
//     if (scanf("%d", &count) != 1 || count < 1 || count > MAX_APPLIANCES) {
//         printf("Please enter a whole number from 1 to %d.\n", MAX_APPLIANCES);
//         return 0;
//     }

//     for (int i = 0; i < count; i++) {
//         printf("\nAppliance %d (use one word, e.g. LED_Light)\n", i + 1);
//         printf("Name: ");
//         scanf("%39s", appliances[i].name);

//         printf("Rated wattage (W): ");
//         if (scanf("%f", &appliances[i].watts) != 1 || appliances[i].watts <= 0) {
//             printf("Wattage must be a positive number.\n");
//             return 0;
//         }

//         printf("Quantity: ");
//         if (scanf("%d", &appliances[i].quantity) != 1 || appliances[i].quantity <= 0) {
//             printf("Quantity must be a positive whole number.\n");
//             return 0;
//         }

//         printf("Average hours used per day (0-24): ");
//         if (scanf("%f", &appliances[i].hoursPerDay) != 1 ||
//             appliances[i].hoursPerDay < 0 || appliances[i].hoursPerDay > 24) {
//             printf("Hours must be between 0 and 24.\n");
//             return 0;
//         }

//         appliances[i].monthlyKWh = appliances[i].watts * appliances[i].quantity *
//                                    appliances[i].hoursPerDay * DAYS_PER_MONTH / 1000.0f;
//     }

//     return count;
// }

// float calculateBill(float monthlyKWh, TariffSlab slabs[], int slabCount) {
//     float bill = 0.0f;
//     float lowerLimit = 0.0f;

//     for (int i = 0; i < slabCount && monthlyKWh > lowerLimit; i++) {
//         float unitsInSlab = monthlyKWh;
//         if (unitsInSlab > slabs[i].upperLimit) {
//             unitsInSlab = slabs[i].upperLimit;
//         }
//         unitsInSlab -= lowerLimit;
//         bill += unitsInSlab * slabs[i].rate;
//         lowerLimit = slabs[i].upperLimit;
//     }

//     return bill;
// }

// void showEstimate(Appliance appliances[], int count) {
//     float totalMonthlyKWh = 0.0f;
//     int largestIndex = 0;
//     int slabCount;
//     TariffSlab slabs[MAX_SLABS];
//     float previousLimit = 0.0f;
//     float peakSunHours;
//     float performanceFactor;
//     float panelWatts;

//     printf("\n--- Appliance energy estimates (30-day month) ---\n");
//     printf("%-20s %12s\n", "Appliance", "kWh/month");
//     printf("--------------------------------\n");

//     for (int i = 0; i < count; i++) {
//         printf("%-20s %12.2f\n", appliances[i].name, appliances[i].monthlyKWh);
//         totalMonthlyKWh += appliances[i].monthlyKWh;
//         if (appliances[i].monthlyKWh > appliances[largestIndex].monthlyKWh) {
//             largestIndex = i;
//         }
//     }

//     printf("--------------------------------\n");
//     printf("Total monthly use: %.2f kWh\n", totalMonthlyKWh);
//     printf("Largest estimated user: %s (%.2f kWh/month)\n",
//            appliances[largestIndex].name, appliances[largestIndex].monthlyKWh);

//     printf("\nNumber of tariff slabs (1-%d): ", MAX_SLABS);
//     if (scanf("%d", &slabCount) != 1 || slabCount < 1 || slabCount > MAX_SLABS) {
//         printf("Invalid slab count.\n");
//         return;
//     }

//     printf("Enter each slab's upper unit limit and rate per unit.\n");
//     printf("Limits must increase; make the final limit cover your monthly use.\n");
//     for (int i = 0; i < slabCount; i++) {
//         printf("Slab %d upper limit (kWh): ", i + 1);
//         if (scanf("%f", &slabs[i].upperLimit) != 1 || slabs[i].upperLimit <= previousLimit) {
//             printf("Each upper limit must be greater than the previous one.\n");
//             return;
//         }
//         printf("Slab %d rate per kWh: ", i + 1);
//         if (scanf("%f", &slabs[i].rate) != 1 || slabs[i].rate < 0) {
//             printf("Rate cannot be negative.\n");
//             return;
//         }
//         previousLimit = slabs[i].upperLimit;
//     }

//     if (previousLimit < totalMonthlyKWh) {
//         printf("The last tariff limit is below the estimated monthly use. Re-enter enough slabs.\n");
//         return;
//     }

//     printf("Estimated energy charge: Rs. %.2f\n", calculateBill(totalMonthlyKWh, slabs, slabCount));
//     printf("(Excludes fixed charges, taxes, and other provider-specific items.)\n");

//     printf("\nAverage peak sun hours per day (example: 5): ");
//     if (scanf("%f", &peakSunHours) != 1 || peakSunHours <= 0) {
//         printf("Peak sun hours must be positive.\n");
//         return;
//     }
//     printf("System performance factor from 0 to 1 (example: 0.80): ");
//     if (scanf("%f", &performanceFactor) != 1 ||
//         performanceFactor <= 0 || performanceFactor > 1) {
//         printf("Performance factor must be greater than 0 and at most 1.\n");
//         return;
//     }
//     printf("Panel rating in watts (example: 550): ");
//     if (scanf("%f", &panelWatts) != 1 || panelWatts <= 0) {
//         printf("Panel rating must be positive.\n");
//         return;
//     }

//     {
//         float dailyKWh = totalMonthlyKWh / DAYS_PER_MONTH;
//         float arrayKW = dailyKWh / (peakSunHours * performanceFactor);
//         int panelCount = (int)(arrayKW * 1000.0f / panelWatts + 0.9999f);

//         printf("\n--- Approximate solar estimate ---\n");
//         printf("Average daily energy use: %.2f kWh/day\n", dailyKWh);
//         printf("Estimated solar array capacity: %.2f kW\n", arrayKW);
//         printf("Approximate number of %.0f W panels: %d\n", panelWatts, panelCount);
//         printf("Estimate only; actual output varies with location, season, shade, and installation.\n");
//     }
// }



// int main(void) {
//     int choice;
//     int Appliance appliances[MAX_APPLIANCES];

//     while (1) {
//         printf("\n=== Home Electricity Bill and Solar Panel Estimator ===\n");
//         printf("1. Estimate household energy, bill, and solar size\n");
//         printf("2. Exit\n");
//         printf("Enter choice: ");

//         if (scanf("%d", &choice) != 1) {
//             printf("Please enter a number.\n");

//             int ch;
//             while ((ch = getchar()) != '\n' && ch != EOF) {
//                 /* discard invalid input */
//             }
//             continue;
//         }

//         if (choice == 1) {
//             int count = readAppliances(appliances);

//             if (count > 0) {
//                 showEstimate(appliances, count);
//             }
//         } else if (choice == 2) {
//             break;
//         } else {
//             printf("Invalid choice. Select 1 or 2.\n");
//         }
//     }

//     printf("Goodbye.\n");
//     return 0;
// }

// Fully correct 
#include <stdio.h>

#define MAX_APPLIANCES 20
#define MAX_SLABS 5
#define DAYS_PER_MONTH 30.0f

typedef struct {
    char name[40];
    float watts;
    int quantity;
    float hoursPerDay;
    float monthlyKWh;
} Appliance;

typedef struct {
    float upperLimit;
    float rate;
} TariffSlab;

void clearInputLine(void);
int readAppliances(Appliance appliances[]);
float calculateBill(float monthlyKWh, TariffSlab slabs[], int slabCount);
void showEstimate(Appliance appliances[], int count);

int main(void) {
    Appliance appliances[MAX_APPLIANCES];
    int count;

    printf("=== Home Electricity Bill and Solar Panel Estimator ===\n");

    count = readAppliances(appliances);

    if (count > 0) {
        showEstimate(appliances, count);
    }

    printf("\nProgram finished.\n");
    return 0;
}

void clearInputLine(void) {
    int ch;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        /* Discard extra characters on the input line. */
    }
}

int readAppliances(Appliance appliances[]) {
    int count;

    printf("\nHow many appliance types? (1-%d): ", MAX_APPLIANCES);

    if (scanf("%d", &count) != 1 ||
        count < 1 || count > MAX_APPLIANCES) {
        printf("Enter a whole number from 1 to %d.\n", MAX_APPLIANCES);
        clearInputLine();
        return 0;
    }
    clearInputLine();

    for (int i = 0; i < count; i++) {
        printf("\nAppliance %d (use one word, e.g. LED_Light)\n", i + 1);

        printf("Name: ");
        if (scanf("%39s", appliances[i].name) != 1) {
            printf("Could not read the appliance name.\n");
            clearInputLine();
            return 0;
        }
        clearInputLine();

        printf("Rated wattage (W): ");
        if (scanf("%f", &appliances[i].watts) != 1 ||
            appliances[i].watts <= 0) {
            printf("Wattage must be a positive number.\n");
            clearInputLine();
            return 0;
        }
        clearInputLine();

        printf("Quantity: ");
        if (scanf("%d", &appliances[i].quantity) != 1 ||
            appliances[i].quantity <= 0) {
            printf("Quantity must be a positive whole number.\n");
            clearInputLine();
            return 0;
        }
        clearInputLine();

        printf("Average hours used per day (0-24): ");
        if (scanf("%f", &appliances[i].hoursPerDay) != 1 ||
            appliances[i].hoursPerDay < 0 ||
            appliances[i].hoursPerDay > 24) {
            printf("Hours must be between 0 and 24.\n");
            clearInputLine();
            return 0;
        }
        clearInputLine();

        appliances[i].monthlyKWh =
            appliances[i].watts *
            appliances[i].quantity *
            appliances[i].hoursPerDay *
            DAYS_PER_MONTH / 1000.0f;
    }

    return count;
}

float calculateBill(float monthlyKWh, TariffSlab slabs[], int slabCount) {
    float bill = 0.0f;
    float lowerLimit = 0.0f;

    for (int i = 0; i < slabCount && monthlyKWh > lowerLimit; i++) {
        float unitsInSlab = monthlyKWh;

        if (unitsInSlab > slabs[i].upperLimit) {
            unitsInSlab = slabs[i].upperLimit;
        }

        unitsInSlab -= lowerLimit;
        bill += unitsInSlab * slabs[i].rate;
        lowerLimit = slabs[i].upperLimit;
    }

    return bill;
}

void showEstimate(Appliance appliances[], int count) {
    float totalMonthlyKWh = 0.0f;
    int largestIndex = 0;
    int slabCount;
    TariffSlab slabs[MAX_SLABS];
    float previousLimit = 0.0f;
    float peakSunHours;
    float performanceFactor;
    float panelWatts;

    printf("\n--- Appliance energy estimates (30-day month) ---\n");
    printf("%-20s %12s\n", "Appliance", "kWh/month");
    printf("--------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-20s %12.2f\n",
               appliances[i].name,
               appliances[i].monthlyKWh);

        totalMonthlyKWh += appliances[i].monthlyKWh;

        if (appliances[i].monthlyKWh >
            appliances[largestIndex].monthlyKWh) {
            largestIndex = i;
        }
    }

    printf("--------------------------------\n");
    printf("Total monthly use: %.2f kWh\n", totalMonthlyKWh);
    printf("Largest estimated user: %s (%.2f kWh/month)\n",
           appliances[largestIndex].name,
           appliances[largestIndex].monthlyKWh);

    printf("\nNumber of tariff slabs (1-%d): ", MAX_SLABS);

    if (scanf("%d", &slabCount) != 1 ||
        slabCount < 1 || slabCount > MAX_SLABS) {
        printf("Invalid slab count.\n");
        clearInputLine();
        return;
    }
    clearInputLine();

    printf("Enter each slab's upper unit limit and rate per unit.\n");
    printf("Limits must increase, and the final limit must cover your use.\n");

    for (int i = 0; i < slabCount; i++) {
        printf("Slab %d upper limit (kWh): ", i + 1);

        if (scanf("%f", &slabs[i].upperLimit) != 1 ||
            slabs[i].upperLimit <= previousLimit) {
            printf("Each upper limit must exceed the previous one.\n");
            clearInputLine();
            return;
        }
        clearInputLine();

        printf("Slab %d rate per kWh: ", i + 1);

        if (scanf("%f", &slabs[i].rate) != 1 ||
            slabs[i].rate < 0) {
            printf("Rate cannot be negative.\n");
            clearInputLine();
            return;
        }
        clearInputLine();

        previousLimit = slabs[i].upperLimit;
    }

    if (previousLimit < totalMonthlyKWh) {
        printf("The last tariff limit is below your estimated monthly use.\n");
        return;
    }

    printf("\nEstimated energy charge: Rs. %.2f\n",
           calculateBill(totalMonthlyKWh, slabs, slabCount));
    printf("(Excludes fixed charges, taxes, and other provider-specific items.)\n");

    printf("\nAverage peak sun hours per day (example: 5): ");

    if (scanf("%f", &peakSunHours) != 1 || peakSunHours <= 0) {
        printf("Peak sun hours must be positive.\n");
        clearInputLine();
        return;
    }
    clearInputLine();

    printf("System performance factor from 0 to 1 (example: 0.80): ");

    if (scanf("%f", &performanceFactor) != 1 ||
        performanceFactor <= 0 || performanceFactor > 1) {
        printf("Performance factor must be greater than 0 and at most 1.\n");
        clearInputLine();
        return;
    }
    clearInputLine();

    printf("Panel rating in watts (example: 550): ");

    if (scanf("%f", &panelWatts) != 1 || panelWatts <= 0) {
        printf("Panel rating must be positive.\n");
        clearInputLine();
        return;
    }
    clearInputLine();

    {
        float dailyKWh = totalMonthlyKWh / DAYS_PER_MONTH;
        float arrayKW = dailyKWh / (peakSunHours * performanceFactor);
        int panelCount =
            (int)(arrayKW * 1000.0f / panelWatts + 0.9999f);

        printf("\n--- Approximate solar estimate ---\n");
        printf("Average daily energy use: %.2f kWh/day\n", dailyKWh);
        printf("Estimated solar array capacity: %.2f kW\n", arrayKW);
        printf("Approximate number of %.0f W panels: %d\n",
               panelWatts, panelCount);
        printf("Estimate only; actual output varies with location, season, "
               "shade, and installation.\n");
    }
}