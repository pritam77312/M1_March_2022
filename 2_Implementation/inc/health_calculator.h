/**
 * @file health_calculator.h
 * @author Pritam Verma (https://github.com/pritam77312)
 * @brief Header File
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _HEALTH_CALCULATOR_H_
#define _HEALTH_CALCULATOR_H_

/**
 * @brief function for calculating the body_mass index by taking height and weight as inputs
 * 
 * @param weight the function accepts the address of the weight input pointed by a float pointer.
 * @param height the function accepts the address of the height input pointed by a float pointer.
 * @return float 
 */

float bmi(float* weight, float* height);

/**
 * @brief function for calulating the basal metabolic rate which tells the user the amount the calories needed
 * for normal functioning of human body.
 * 
 * @param weight_in_kg  the function accepts the address of the weight input pointed by a float pointer.
 * @param height_in_m  the function accepts the address of the height input pointed by a float pointer.
 * @param age the function accepts the address of the age(in years) input pointed by an int  pointer.
 * @param Gender the function accepts the address of the gender ('M' or 'F') input pointed by a char pointer.
 * @return float 
 */

float bmr(float* weight_in_kg, float* height_in_m, int* age, char* Gender);

/**
 * @brief function calculating the fat percentage which determines the fitness level of human body.
 * 
 * @param age the function accepts the address of the age(in years) input pointed by an int  pointer.
 * @param weight_in_kg the function accepts the address of the weight input pointed by a float pointer.
 * @param height_in_m the function accepts the address of the height input pointed by a float pointer.
 * @param Gender the function accepts the address of the gender ('M' or 'F') input pointed by a char pointer.
 * @return float 
 */

float fat_percent(int* age, float* weight_in_kg, float* height_in_m, char* Gender);

#endif