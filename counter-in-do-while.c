#include <stdio.h>


int main()
{
    // Variable declaration
    int contador = 0;
    int num;
    
    // Data input
    printf("Type a number: ");
    scanf("%d", &num);
    
    // Processing & Data output
    do {
        // sequencia de comandos;
        printf("%d\n", contador);
        contador++;
    } while (contador <= num);
}