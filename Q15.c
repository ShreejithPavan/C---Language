#include <stdio.h>
int main() {
    int I = 5;
    int J = I;
    int i,j;
    
    for (i = I; i > 0; i--) {
        for ( j = 0; j < i; j++) {
            printf("%d ", J);
        }
        printf("\n");
        J--;
    }
    
    return 0;
}

