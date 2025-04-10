#include <stdio.h>
#include <conio.h>

int main() {
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        goto error; 
    }

    printf("You entered: %d\n", number);
    return 0;

error:
    printf("Error: You entered a negative number.\n");
    return 1;
}

