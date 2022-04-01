#include <stdio.h>
#include <math.h>
#include "../inc/health_calculator.h"

float fat_percent(int *age, float *weight_in_kg, float *height_in_m, char *Gender)
{
    float d, y;
    float a = *weight_in_kg / ((*height_in_m) * (*height_in_m));
    switch (*Gender)
    {
    case 'M':
        d = ((1.20 * a) + (0.23 * (*age)) - 16.2);
        printf("Body Fat percentage: %f\n", d);
        if (d >= 8 && d < 12)
        {
            printf("Category : Lean\n");
        }
        else if (d >= 12 && d < 20)
        {
            printf("Category : Moderately lean\n");
        }
        else if (d >= 20 && d < 30)
        {
            printf("Category : Excess Fat\n");
        }
        else if (d >= 30)
        {
            printf("High Body Fat risk\n");
        }
        return d;
        break;
    case 'F':
        y = ((1.20 * a) + (0.23 * (*age)) - 5.4);
        printf("Body Fat percentage: %f\n", y);
        if (y >= 18 && y < 22)
        {
            printf("Category : Lean\n");
        }
        else if (y >= 22 && y < 30)
        {
            printf("Category : Moderately lean\n");
        }
        else if (y >= 30 && y < 40)
        {
            printf("Category : Excess Fat\n");
        }
        else if (y >= 40)
        {
            printf("High Body Fat risk\n");
        }
        return y;
        break;
    default:
        printf("Invalid Entry\n");
        break;
    }
    return 0.0;
}