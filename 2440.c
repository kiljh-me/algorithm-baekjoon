#include <stdio.h>

int main(){
    int i, j, N;
    scanf("%d", &N);
    
    for(i=N; i>0; i--){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");    
    }
    
    return 0;
}
