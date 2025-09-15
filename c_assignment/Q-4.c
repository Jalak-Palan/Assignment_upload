#include <stdio.h>
int main() {
int b;
    scanf("%d",&b);
    for ( int i = 1; i<= b; i++)
    {
        for ( int n =1; n<=b; n++)
        {
            printf("*");
        }

        printf("\n");
    }
 
    return 0;
    
}