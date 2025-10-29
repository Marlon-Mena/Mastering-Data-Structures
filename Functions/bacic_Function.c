#include <stdio.h>

// Function prototype
int sum(int a, int b);

int main() {
    
    int calculation = sum(5, 1);
    
    printf("The sum is %d", calculation);
    
    return 0;
}

// Function definition
int sum(int a, int b) {
    
    int result;
    
    result = a + b;
    
    return result;
}
