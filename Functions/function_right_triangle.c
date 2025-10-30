#include <stdio.h>

// Function prototype
int right_triangle(int a);

int main() {
    
    int a;
    
    // Ask the user for the triangle base
    printf("Enter the base of the right triangle: ");
    scanf("%d", &a);
    
    // Calls the function and stores the result (not used, since function returns nothing)
    int result = right_triangle(a); 
    
    return 0; 
}

// Function definition
int right_triangle(int a) {
    
    int column = a; // total number of columns (base size)
    
    // Outer loop controls the number of rows (height)
    for (int i = 0; i <= column; i++) {
        
        // Inner loop prints the '*' characters per row
        for(int j = 0; j <= i; j++) {
            printf("*");
        }
        
        // Moves to the next line after each row
        printf("\n");
    }
}
