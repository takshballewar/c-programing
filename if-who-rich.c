
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int person1 , person2  ;
    printf("\n enter person1=>");
    scanf("%d",&person1) ;
    printf("\n enter person2=>");
    scanf("%d",& person2) ;
    
    if(person1>person2)
    {
        printf("\n person1 is rich");
    }
    else{
        printf("\n person2 is rich");
    }
    printf("\n");
    return 0;
}







