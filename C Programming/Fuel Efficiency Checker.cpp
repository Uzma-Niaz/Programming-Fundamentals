#include <stdio.h>
void calculateFuelEfficiency(float distance, float fuel, float standardEfficiency) {
    if (fuel <= 0) {
        printf("Fuel can't be zero or negative.\n");
        return;
    }
    float efficiency = distance / fuel;
    printf("Your calculated fuel efficiency: %.2f km per liter\n", efficiency);

    // Compare with standard efficiency
    if (efficiency < standardEfficiency) {
        printf("Your calculated efficiency is less than the company-claimed efficiency.\n");
        printf("Suggestions to improve fuel efficiency:\n");
        printf("- Regular maintenance\n");
        printf("- Sensible driving\n");
        printf("- Reducing unnecessary weight in your vehicle\n");

	} else {
         printf("Your fuel efficiency claimed by your company is: %.2f km per liter\n", standardEfficiency);
        printf("Your calculated efficiency is on par with the company-claimed efficiency!\n");
       
    }
}
   
void vehicleMenu(char companies[], char vehicles[5][30], float standardEfficiencies[5]) {
    int choice1;
    float distance, fuel;

    printf("\nSelect a car from %s:\n", companies);
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, vehicles[i]);
    }
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice1);

    if (choice1 < 1 || choice1 > 5) {
        printf("Invalid choice!\n");
        return;
    }

    // Get standard efficiency for the selected car
    float standardEfficiency = standardEfficiencies[choice1 - 1];

    printf("\nEnter distance traveled (in km): ");
    scanf("%f", &distance);
    printf("Enter fuel consumed (in liters): ");
    scanf("%f", &fuel);

    // Calculate and compare fuel efficiency
    calculateFuelEfficiency(distance, fuel, standardEfficiency);
}

void generalVehicleMenu() {
    float distance, fuel,standardEfficiency; 

    printf("\nEnter distance traveled (in km): ");
    scanf("%f", &distance);
    printf("Enter fuel consumed (in liters): ");
    scanf("%f", &fuel);
      printf("Enter your vehicle standard fuel efficiency in km: ");
   scanf("%f", &standardEfficiency);

    // Calculate and compare fuel efficiency
    calculateFuelEfficiency(distance, fuel, standardEfficiency);
    
}

int main() {
    int choice;
    // arr[lenght] [each element lenght or size]
    char companies[5][30] = {"Toyota", "Honda", "Ford", "BMW", "Suzuki"};

    // arr[num of array] [each arr lenght] [each element lenght or size]
    // is ka mtlb 5 array hain , har array k size 5 element hai or har elemtn 30 sy bara ni hu skta
    // agr 30 sy bara koi element save krna chahein gy tw too long k error
    char vehicles[5][5][30] = {
        {"Corollyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyvfggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggga", "Camry", "Yaris", "Highlander", "Land Cruiser"},
        {"Civic", "Accord", "Fit", "CR-V", "Pilot"},
        {"Fiesta", "Focus", "Mustang", "Escape", "F-150"},
        {"X5", "M3", "7 Series", "i8", "X3"},
        {"Alto", "Cultus", "Swift", "Wagon", "Ciaz"}
    };

    // Define standard efficiency for each vehicle (in km per liter)
    float toyotaEfficiencies[5] = {18.0, 16.5, 17.5, 12.0, 8.0}; // Example values
    float hondaEfficiencies[5] = {20.0, 18.0, 22.0, 14.0, 12.5};
    float fordEfficiencies[5] = {15.5, 14.5, 10.0, 13.5, 9.0};
    float bmwEfficiencies[5] = {14.5, 13.0, 12.5, 9.0, 11.0};
    float suzukiEfficiencies[5] = {24.0, 28.0, 16.0, 25.0, 20.0};

    do {
        printf("\nFuel Efficiency Checker\n");
        printf("1. Toyota\n");
        printf("2. Honda\n");
        printf("3. Ford\n");
        printf("4. BMW\n");
        printf("5. Suzuki\n");
        printf("6. General Vehicle\n");
        printf("0. Exit\n");
        printf("Enter your choice (0-6): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                vehicleMenu(companies[0], vehicles[0], toyotaEfficiencies);
                break;
            case 2:
                vehicleMenu(companies[1], vehicles[1], hondaEfficiencies);
                break;
            case 3:
                vehicleMenu(companies[2], vehicles[2], fordEfficiencies);
                break;
            case 4:
                vehicleMenu(companies[3], vehicles[3], bmwEfficiencies);
                break;
            case 5:
                vehicleMenu(companies[4], vehicles[4], suzukiEfficiencies);
                break;
            case 6:
                generalVehicleMenu();
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please choose again.\n");
        }
    } while(choice != 0);

    return 0;
}
