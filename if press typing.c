#include <stdio.h>

int main() {
    float xerox, typing, bill;
    int op;

    printf("\nEnter 1 for xerox");
    printf("\nEnter 2 for typing");
    printf("\nEnter option => ");
    scanf("%d", &op);

    if (op == 1) {
        printf("\nEnter number of xerox copies: ");
        scanf("%f", &xerox);

        if (xerox > 15)
        {
            printf("\nPer page charges is 2Rs");
            bill = xerox * 2;
            printf("Value of bill = %.2f for xerox", bill);
        }
        else{
            printf("\nPer page charges is 5Rs");
            bill = xerox * 5;
            printf("\nValue of bill = %.2f for xerox", bill);
     
        }
            
        }
    else if (op == 2) {
        printf("\nEnter number of typing pages: ");
        scanf("%f", &typing);
        if (typing>15){
            printf("\nper typing charge is 5");
             bill = typing * 5;
            printf("\nValue of bill = %.2f for typing", bill);
        }
        else{
            printf("\nPer page charges is 15 Rs");
            bill = typing * 15;
            printf("\nValue of bill = %.2f for xerox", bill);
        }
        
    }
    

         printf("/n");
    return 0;
}
