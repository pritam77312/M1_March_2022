#include<stdio.h>
#include "../inc/health_calculator.h"
#include "../unity/unity.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}
       
void test_bmi(void){

    float weight = 65;
    float height = 1.8;
    
    TEST_ASSERT_EQUAL(20.061729,bmi(&weight, &height));

    float weight1 = 56;
    float height1 = 1.65;
    
    TEST_ASSERT_EQUAL(20.569330,bmi(&weight1, &height1));

    float weight3 = 35;
    float height3 = 1.2;
    
    TEST_ASSERT_EQUAL(24.305553,bmi(&weight3, &height3));

}

void test_bmr(void){

    float weight5 = 65;
    float height5 = 1.8;
    int age = 22;
    char gender = 'M';
    
    TEST_ASSERT_EQUAL(1710.150024,bmr(&weight5, &height5, &age, &gender));

    float weight6 = 56;
    float height6 = 1.65;
    int age1 = 25;
    char gender1 = 'F';
    
    TEST_ASSERT_EQUAL(1076.780518,bmr(&weight6, &height6, &age1, &gender1));

    float weight8 = 35;
    float height8 = 1.2;
    int age3 = 6;
    char gender3 = 'F';
    
    TEST_ASSERT_EQUAL(963.968994,bmr(&weight8, &height8, &age3, &gender3));

}

void test_fat_percent(void){

    float weight10 = 65;
    float height10 = 1.8;
    int age5 = 22;
    char gender5 = 'M';
    
    TEST_ASSERT_EQUAL(12.000000,fat_percent(&age5, &weight10, &height10,&gender5));

    float weight11 = 56;
    float height11 = 1.65;
    int age6 = 25;
    char gender6 = 'F';
    
    TEST_ASSERT_EQUAL(25.0,fat_percent(&age6, &weight11, &height11,&gender6));

    float weight13 = 35;
    float height13 = 1.2;
    int age8 = 6;
    char gender8 = 'F';
    
    TEST_ASSERT_EQUAL(25.146664,fat_percent(&age8, &weight13, &height13,&gender8));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_bmi); 
RUN_TEST(test_bmr);
RUN_TEST(test_fat_percent);
return UNITY_END();
}