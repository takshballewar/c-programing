//
//  main.c
//  p9subject
//
//  Created by TAKSH on 18/07/25.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
  
    
    int eng,maths,ss,total;
    
    printf("\nEnter marks of english =>");
    scanf("%d",&eng);
    
    printf("\nEnter marks of maths =>");
    scanf("%d",&maths);
    
    printf("\nEnter marks of ss =>");
    scanf("%d",&ss);
    
    total=eng+maths+ss;
    
    printf("\nTotal = %d",total);
    
    printf("\n");
    return 0;
}
