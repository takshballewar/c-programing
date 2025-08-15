#include <stdio.h>

int main(int argc, const char * argv[]) {
    int  number ;
    printf("\n enter number=>");
    scanf("%d",&number);
    
    
    
    if(number==1)
    {
        printf("\n monday");
    }
    else if(number==2)
    {
        printf("\n tusday");
    }
    else if(number==3)
    {
        printf("\n wenesday");
    }
    else if(number==4)
    {
        printf("\n thusday");
    }
    else if(number==5)
    {
        printf("\n friday");
    }
    else if(number==6)
    {
        printf("\n saturday");
    }
    else 
        printf("\n wrong day no");
    
    printf("\n");
    return 0;
}
