# 🧠 Basic Pointer Introduction in C

This project demonstrates the **basic concept of pointers** in the C programming language.  
It shows how to declare a pointer, assign it the address of a variable, and print both the value and the memory address.

---

## 📌 Source Code

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int test = 2;
    int *pointer = NULL; // Sets the pointer to null (0), avoiding garbage values
    
    pointer = &test; // pointer receives the address of the variable 'test'
    
    // Displays the value of 'test' and the value pointed to by 'pointer'
    // NOTE: to print memory addresses correctly, use %p
    printf("Variable test = %d. Value pointed to by pointer = %d.\n", test, *pointer);

    // Also displays the memory address of the variable
    printf("Address of variable test: %p\n", (void*)&test);
    printf("Address stored in pointer: %p\n", (void*)pointer);

    return 0;
}
