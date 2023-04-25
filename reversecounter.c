#include <stdio.h>

int main()
{
    // Variable declaration
    int cnt = 0; // Counter variable
    int num; // Number input variable
    
    // Data input
    printf("DA REVERSED COUNTER!\n");
    printf("Choose a number for DA REVERSED COUNTER to count backwards: ");
    scanf("%d", &num);
    
    // Processing & Data output
    while (num >= cnt) {
        printf("%d\n", num);
        num--;
    }
    printf("DA END.");
}