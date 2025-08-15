#include <stdio.h>

int main() {
    float kg , pound ;
    int op;
    
    printf("\nEnter 1 to kg to pound");
    printf("\nEnter 2 to pound to kg");
    printf("\nEnter option => ");
    scanf("%d", &op);
    
    if (op == 1) {
        printf("\nEnter value in kg: ");
        scanf("%f", &kg);
        pound= kg*2.2046;
        printf("Equivalent in pound = %.2f pound\n", pound);
    } else if (op == 2) {
        printf("\nEnter value in kg: ");
        scanf("%f", &kg);
        kg = pound/2.2046 ;
        printf("Equivalent in kg = %.2f kg\n", kg);
    } else {
        printf("\nWrong option\n");
    }
    
    return 0;
}
