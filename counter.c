#include <stdio.h>

int main()
{
    // Variable declaration
    int cnt; // Counter variable
    int num; // Number input variable
    
    // Data input
    printf("DA COUNTER!\n");
    printf("Choose a number for DA COUNTER to count: ");
    scanf("%d", &num);
    
    // Processing & Data output
    while (cnt <= num) {
        printf("%d\n", cnt);
        cnt++;
    }
    printf("DA END.");
}
