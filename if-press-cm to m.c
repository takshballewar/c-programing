#include <stdio.h>

int main() {
    float cm, m;
    int op;
    
    printf("\nEnter 1 to m to cm");
    printf("\nEnter 2 to cm to m");
    printf("\nEnter option => ");
    scanf("%d", &op);
    
    if (op == 1) {
        printf("\nEnter value in m: ");
        scanf("%f", &m);
        cm = m * 100;
        printf("Equivalent in cm = %.2f cm\n", cm);
    } else if (op == 2) {
        printf("\nEnter value in cm: ");
        scanf("%f", &cm);
        m = cm / 100;
        printf("Equivalent in m = %.2f m\n", m);
    } else {
        printf("\nWrong option\n");
    }
    
    return 0;
}
