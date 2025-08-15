#include <stdio.h>

int main(int argc, const char * argv[]) {
    int banana , chicku  ;
    printf("\n enter banana=>");
    scanf("%d",&banana) ;
    printf("\n enter chiku=>");
    scanf("%d",& chicku) ;
    
    if(banana>chicku)
    {
        printf("\n banana is expensive");
    }
    else{
        printf("\n chiku is expensive");
    }
    printf("\n");
    return 0;
}







