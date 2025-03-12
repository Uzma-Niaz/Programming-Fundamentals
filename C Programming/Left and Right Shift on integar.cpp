#include <stdio.h>
#include <conio.h>

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Original number: %d\n", num);
    printf("After left shift : %d\n", num<<2);
    printf("After right shift: %d\n", num>>2);
     
     getch();
	 return 0;
}

