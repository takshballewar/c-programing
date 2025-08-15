//
//  main.c
//  p33 char
//
//  Created by TAKSH on 23/07/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char ch;
    
    printf("\nEnter char =>");
    scanf("%c",&ch);
    
    if(ch=='a' || ch=='A')
    {
        printf("\nIt's A");
    }
    else{
        printf("\nOhter");
    }
    
    return 0;
}
