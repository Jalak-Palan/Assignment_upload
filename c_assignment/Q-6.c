#include <stdio.h>
int main() {
    int a,i;
int b;
    scanf("%d",&b);
    for(i=65;i<='A'+b-1;i++){
        for(a=65;a<='A'+b-1;a++){
            printf("%c ",a);
        
        }
        printf("\n");
    }
    
    return 0;
}