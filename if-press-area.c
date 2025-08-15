#include <stdio.h>

int main() {
    float h, b, r,area ;
    int op;
    
    printf("\nEnter 1 for triangle");
    printf("\nEnter 2 for circle");
    printf("\nEnter option => ");
    scanf("%d", &op);
    
    if (op == 1) {
        printf("\nEnter height and base of the triangle: ");
        scanf(" %f", &h, &b);
        area = 0.5 * h *  b;
        printf("Area of triangle = %.2f\n", area);
    } else if (op == 2) {
        printf("\nEnter radius of the circle: ");
        scanf("%f", &r);
        area = 3.14 * r * r;
        printf("Area of circle = %.2f\n", area);
    } else {
        printf("\nWrong option\n");
    }
    
    return 0;
}
