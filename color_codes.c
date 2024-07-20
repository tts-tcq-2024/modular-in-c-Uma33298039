#include "color_codes.h"
#include <stdio.h>

#define NUM_COLOR_PAIRS 25

const char *color_mapping[NUM_COLOR_PAIRS][2] = {
    {"White", "Blue"},
    {"White", "Orange"},
    // Add more pairs as needed
};

void initialize_color_codes() {
    // Initialize colors (dummy implementation)
}

void translate_color_pair(int pair_number, char *major_color, char *minor_color) {
    if (pair_number >= 0 && pair_number < NUM_COLOR_PAIRS) {
        *major_color = *color_mapping[pair_number][0];
        *minor_color = *color_mapping[pair_number][1];
    } else {
        *major_color = '\0';
        *minor_color = '\0';
    }
}

void print_color_manual() {
    printf("Color Coding Manual:\n");
    for (int i = 0; i < NUM_COLOR_PAIRS; ++i) {
        printf("Pair %d: %s - %s\n", i + 1, color_mapping[i][0], color_mapping[i][1]);
    }
}
