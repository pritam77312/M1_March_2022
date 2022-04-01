#include <stdio.h>
#include "../inc/health_calculator.h"

float bmr(float *weight_in_kg, float *height_in_m, int *age, char *Gender)
{
    switch (*Gender)
    {
    case 'M':
        return (66 + (13.75 * (*weight_in_kg)) + (500 * (*height_in_m)) - (6.8 * (*age)));
        break;
    case 'F': 
        return (655.1 + (9.563 * (*weight_in_kg)) + (1.85 * (*height_in_m)) - (4.676 * (*age)));
        break;
    default:
        printf("Invalid Entry\n");
        return 0.0;
        break;
    }
}