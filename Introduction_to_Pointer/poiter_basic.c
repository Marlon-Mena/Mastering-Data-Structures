#include <stdio.h>
#include <stdlib.h>

int main() {
    int teste = 2;
    int *ponteiro = NULL; // Define o ponteiro com valor nulo (0), evitando lixo de memória
    
    ponteiro = &teste; // ponteiro recebe o endereço da variável 'teste'
    
    // Exibe o valor da variável 'teste' e o valor apontado por 'ponteiro'
    // OBS: para imprimir endereços de memória corretamente, use %p
    printf("Variável teste = %d. Valor apontado por ponteiro = %d.\n", teste, *ponteiro);

    // Exibe também o endereço de memória da variável
    printf("Endereço da variável teste: %p\n", (void*)&teste);
    printf("Endereço armazenado em ponteiro: %p\n", (void*)ponteiro);

    return 0;
}
