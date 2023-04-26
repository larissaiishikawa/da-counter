#include <stdio.h>


int main()
{
    // Variable declaration
    int contador;
    int num;
    
    // Data input
    printf("Type a number: ");
    scanf("%d", &num);
    
    // Processing & Data output
    do {
        // sequencia de comandos;
        contador = 0;
        printf("%d\n", num);
        num--;
    } while (contador <= num);
}
