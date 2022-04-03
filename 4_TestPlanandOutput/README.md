# TEST PLAN

## Table no: High level test plan

| *Test ID* | *Description*                                              | *Exp I/P* | *Exp O/P* | *Actual Out* |*Type Of Test*  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  HR_01       |Functions should calculate BMI, BMR, FAT_PERCENT as per user's choice|Integer choice|SUCCESS|SUCCESS|Technical|
|  HR_02       |User should give inputs in appropriate unit for functions to evaluate the inputs correctly| No I/P |SUCCESS|SUCCESS|Requirement based|

## Table no: Low level test plan

| *Test ID* | *Description*                                              | *Exp IN* | *Exp OUT* | *Actual Out* |*Type Of Test*  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  LR_01       |Calculate BMI when user gives choice 1 as input|User inputs weight in kg and height in m|SUCCESS|SUCCESS|Requirement based |
|  LR_02       |Calculate BMR when user gives choice 2 as input|User inputs weight in kg, height in m, age in years, gender as 'M' or 'F'|SUCCESS|SUCCESS|Requirement based |
|  LR_03       |Calculate FAT_PERCENT when user gives choice 3 as input|User inputs weight in kg, height in m, age in years, gender as 'M' or 'F'|SUCCESS|SUCCESS|Requirement based |
|  LR_04       |Calculate all indices when user gives choice 4 as input|User inputs weight in kg, height in m, age in years, gender as 'M' or 'F'|SUCCESS|SUCCESS|Requirement based |
