#include <stdio.h>


int ask_for_value(const char *value_name) {
    int value;
    printf("Enter %s: ", value_name);  
    scanf("%d", &value);
    return value;  
}

int main() {

    // getting height and lenght
    int regtangle_height = ask_for_value("rectangle height");
    int regtangle_lenght = ask_for_value("rectangle lenght");
    
    // conversions
    int perimeter = (regtangle_height * 2) + (regtangle_lenght * 2);
    int area = regtangle_height * regtangle_lenght;

    // getting farenhite
    int farenhite = ask_for_value("farenhite");

    // conversion farenhite
    int conversion = (farenhite - 32)/1.8;

    // getting minutes
    int total_minutes = ask_for_value("minutes");

    //calculating hours and remaining minutes
    int hours = total_minutes/60.0f;
    int minutes = total_minutes%60;

    // printing values
    printf("\n\nRegtangle: \nArea: %d\n", area);
    printf("Perimeter: %d", perimeter);
    printf("\n\nFarenhite conversion: \n%d°F = %d°C", farenhite, conversion);
    printf("\n\nminute conversion: \n%d minutes is equal to %d hours and %d minutes.\n\n", total_minutes, hours, minutes);

return 0;
}