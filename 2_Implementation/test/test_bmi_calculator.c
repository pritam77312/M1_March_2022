#include<stdio.h>
#include "../inc/bmi_calculator.h"
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



int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_bmi); 
return UNITY_END();
}