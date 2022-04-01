#include <stdio.h>
#include "../inC/health_calculator.h"

float bmi(float *weight, float *height)
{

    float a = *weight / ((*height) * (*height));

    printf("Your Body Mass Index(BMI) is %f\n", a);

    if (a < 15)
    {
        printf("Your BMI category is: Malnourishment\n");
    }
    else if (a >= 15.1 && a <= 17.5)
    {
        printf("Your BMI category is: Eaciate\n");
    }
    else if (a >= 17.6 && a <= 18.5)
    {
        printf("Your BMI category is: Underweight\n");
    }
    else if (a >= 18.6 && a <= 24.9)
    {
        printf("Your BMI category is: Ideal\n");
    }
    else if (a >= 25 && a <= 25.9)
    {
        printf("Your BMI category is: Overweight\n");
    }
    else if (a >= 30 && a <= 30.9)
    {
        printf("Your BMI category is: Obesity\n");
    }
    else if (a >= 40)
    {
        printf("Your BMI category is: Insane Obesity\n");
    }
    else
    {
        printf("Invalid entry\n");
    }

    return a;
}