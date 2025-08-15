#include <stdio.h>

int main(int argc, const char * argv[]) {
    int  add , sub , divide , multiply , number1 ,number2 ;
    int op;
    
    printf("\nEnter 1 for add");
    printf("\nEnter 2 for sub");
    printf("\nEnter 3 for divide");
    printf("\nEnter 4 for multiply");
    printf("\nEnter option =>");
    scanf("%d",&op);
    
    if(op==1)
    {
        
        printf("\n enter number1=>");
        scanf("%d",&number1);
        printf("\n enter number2=>");
        scanf("%d",&number2);
        printf("\n add = %d",number1+number2);
        
    }
    else if(op==2)
    {
        
        printf("\n enter number1=>");
        scanf("%d",&number1);
        printf("\n enter number2=>");
        scanf("%d",&number2);
        printf("\n sub = %d",number1-number2);
       
    }
    
   else if (op==3)
        
        printf("\n enter number1=>");
        scanf("%d",&number1);
        printf("\n enter number2=>");
        scanf("%d",&number2);
        printf("\n multiply = %d",number1*number2);
        
    }
    
     else if (op==4)
            
        printf("\n enter number1=>");
        scanf("%d",&number1);
        printf("\n enter number2=>");
        scanf("%d",&number1);
        printf("\n divide = %d",number1/number2);
    }
else{
    printf("\nWrong opt");
}
    
    printf("\n");
    return 0;
}


