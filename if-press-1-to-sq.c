#include <stdio.h>

int main(int argc, const char * argv[]) {

    int  number1;
    int op;

    printf("\nEnter 1 for Square");
    printf("\nEnter 2 for cube");
    printf("\nEnter option =>");
    scanf("%d",&op);
    
    if(op==1)
    {
        printf("\n enter number1=>");
        scanf("%d",&number1);
        printf("\n sq = %d",number1*number1);
    }
    else if(op==2)
    {
        printf("\n enter number1=>");
        scanf("%d",&number1);
        printf("\n cube = %d",number1*number1*number1);
    }
    else{
        printf("\nWrong opt");
    }

    printf("\n");
    return 0;
}

