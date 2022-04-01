#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "inc/health_calculator.h"

typedef struct User
{
    char name[100];
    int age;
    float height_in_m;
    float weight_in_kg;
    char Gender;
} user;

int main()
{

    float (*bmi_fptr)(float *, float *) = NULL;
    float (*bmr_fptr)(float *, float *, int *, char *) = NULL;
    float (*fatP_fptr)(int *, float *, float *, char *) = NULL;

    bmi_fptr = &bmi;
    bmr_fptr = &bmr;
    fatP_fptr = &fat_percent;

    float a, b, f;
    printf("Welcome\n");
    int choice = 0;

    float *ptrw = NULL, *ptrh = NULL;
    int *ptra = NULL;
    char *ptrc = NULL;

    user data, *ptr = NULL;
    ptr = &data;

    ptr = (user *)malloc(sizeof(user));

    printf("Enter name: \t");
    scanf("%d[^\n]%*c", &ptr->name);

    printf("Enter age: \t");
    scanf("%d", &ptr->age);

    printf("Enter your Gender M/F: \t");
    scanf("%s", &ptr->Gender);

    printf("Enter height in m: \t");
    scanf("%f", &ptr->height_in_m);

    printf("Enter weight in kg: \t");
    scanf("%f", &ptr->weight_in_kg);

    ptrw = (float *)malloc(sizeof(float));
    ptrw = &ptr->weight_in_kg;
    
    ptrh = (float *)malloc(sizeof(float));
    ptrh = &ptr->height_in_m;
    
    ptra = (int *)malloc(sizeof(int));
    ptra = &ptr->age;
    
    ptrc = (char *)malloc(sizeof(char));
    ptrc = &ptr->Gender;
    

    printf("Enter\n 1 for BMI\n 2 for BMR\n 3 for Fat_percent\n 4 for all\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        (*bmi_fptr)(ptrw, ptrh);
        break;
    case 2:
        a = (*bmr_fptr)(ptrw, ptrh, ptra, ptrc);
        printf("The amount of calories needed for normal functioning of body:\t");
        printf("%f\n", a);
        break;
    case 3:
        (*fatP_fptr)(ptra, ptrw, ptrh, ptrc);
        break;
    case 4:
        (*bmi_fptr)(ptrw, ptrh);
        a = (*bmr_fptr)(ptrw, ptrh, ptra, ptrc);
        printf("The amount of calories needed for normal functioning of body:\t");
        printf("%f\n", a);
        (*fatP_fptr)(ptra, ptrw, ptrh, ptrc);
        break;
    default:
        printf("Invalid entry\n");
    }

    free(ptr);
    free(ptrw);
    free(ptrh);
    free(ptra);
    free(ptrc);

    return 0;
}