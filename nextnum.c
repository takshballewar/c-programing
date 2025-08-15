#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number ;
    printf("\n number=>");
    scanf("%d",&number);
    
    printf("Previous number: %d\n", number - 1);
    printf("next number: %d\n", number + 1);
    printf("\n");
    return 0;
}


