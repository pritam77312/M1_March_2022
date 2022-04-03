#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "inc/bmi_calculator.h"

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
    
    bmi_fptr = &bmi;
   
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
    

    printf("Enter\n 1 for BMI\n ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        (*bmi_fptr)(ptrw, ptrh);
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