
#include <stdio.h>
    int main() {
        printf("Enter a number to create a multiplication chart: ");
        int n;
        scanf("%d", &n);
        for(int row = 1; row <= n; row++) {
            for(int col = 1; col <= n; col++) {
                int mul = row * col;
            printf("%d\t", mul);
        }
        printf("\n");
        }
    }