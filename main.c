#include <stdio.h>
#include "color_codes.h"

int main() {
    int pair_number;
    char major_color[20];
    char minor_color[20];

    initialize_color_codes();

    printf("Enter a pair number (1-25): ");
    scanf("%d", &pair_number);

    translate_color_pair(pair_number - 1, major_color, minor_color);

    if (major_color[0] != '\0' && minor_color[0] != '\0') {
        printf("Pair %d: %s - %s\n", pair_number, major_color, minor_color);
    } else {
        printf("Invalid pair number.\n");
    }

    return 0;
}
