#include <stdio.h>
#include <math.h>
#include <time.h>

    int main() {
        int awnser_1, awnser_2, awnser_3, result, def, base, expoment, result;
        srand(time(NULL));
        printf("1. While\n2. for loop\n3. Pow\n4.Pow with random integers\nInput:");
        scanf("%d", &def);

        if (def = 4) {base = rand(); exponent = rand(); def = 5}
        if (def = 3) {}

        if (def = 5) {
        printf("Enter the base: "); scanf("%lf", &base);
        printf("Enter the exponent: "); scanf("%lf", &exponent);
        result = pow(base, exponent);
        printf("%.2lf to the power of %.2lf is: %.2lf\n", base, exponent, result); return 0;}

        printf("Input 2 numbers first number will be the base and the second will be the power: ");
        scanf("%d%d", &awnser_1, &awnser_2); awnser_3 = awnser_1;

        if (def = 1) {
        if (awnser_2 <= 1) {printf("You cant power a number with this number %d", awnser_2);} else {
        while (awnser_2 != 1) {awnser_1 = (awnser_1 * awnser_3); --awnser_2;} printf("The result is: %d\n\n", awnser_1);}

        } else if (def = 2) { 
        for (int i = 1; i <= awnser_2; i++) {
            result *= awnser_1; }
        } else {
            printf("Error");
            return 0;
        } 
    }