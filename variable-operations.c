#include <stdio.h>

int main() {

    // regtangulo
    int height = 4;
    int lenght = 8;

    int perimeter = (height * 2) + (lenght * 2);
    int area = height * lenght;

    // farenhite
    int farenhite = 20;
    int conversion = (farenhite - 32)/1.8;

    // minutes to hours 
    int total_minutes = 349;
    int hours = 349/60.0f;
    int minutes = 349%60;

    // printing
    printf("\nArea: %d\n", area);
    printf("Perimeter: %d\n\n", perimeter);

    printf("%d°F = %d°C\n\n", farenhite, conversion);

    printf("%d minutes is equal to %d hours and %d minutes.\n\n", total_minutes, hours, minutes);
}