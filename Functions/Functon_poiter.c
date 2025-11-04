
#include <stdio.h>

void calculo(int number1, int number2, int *poiter, int *poit) {
    
    *poiter = number1 + number2;
    *poit = number1 * number2;
    
}

int main(void) {
    
    int a, b;

    calculo(6, 3, &a, &b);
    printf("a soma é %p, e a multiplicação é %p", a, b);

    return 0;
}