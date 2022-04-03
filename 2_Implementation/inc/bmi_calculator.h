/**
 * @file bmi_calculator.h
 * @author Pritam Verma (https://github.com/pritam77312)
 * @brief Header File
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _BMI_CALCULATOR_H_
#define _BMI_CALCULATOR_H_

/**
 * @brief function for calculating the body_mass index by taking height and weight as inputs
 * 
 * @param weight the function accepts the address of the weight input pointed by a float pointer.
 * @param height the function accepts the address of the height input pointed by a float pointer.
 * @return float 
 */

float bmi(float* weight, float* height);

#endif