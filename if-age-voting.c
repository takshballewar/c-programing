#include <stdio.h>

int main(int argc, const char * argv[]) {
    int age  ;
    printf("\n enter age=>");
    scanf("%d",&age) ;
    
    if(age>18)
    {
        printf("\nYou can vote");
    }
    else{
        printf("\nYou cant vote");
    }
   
    return 0;
}





