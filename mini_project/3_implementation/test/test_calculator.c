#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_factorial(void);
void test_isarmstrong(void);
void test_prime(void);
void test_squareroot(void);
void test_sine(void);
void test_cosine(void);
void test_tan(void);
void test_Cot(void);
void test_Sec(void);
void test_Cosec(void);
/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite,"add", test_add);
  CU_add_test(suite,"subtract", test_subtract);
  CU_add_test(suite,"multiply", test_multiply);
  CU_add_test(suite,"divide", test_divide);
  CU_add_test(suite,"factorial",test_factorial );
  CU_add_test(suite,"isarmstrong",test_isarmstrong );
  CU_add_test(suite,"isprime",test_prime );
  CU_add_test(suite,"squareroot",test_squareroot );
  CU_add_test(suite,"sine",test_sine);
  CU_add_test(suite,"cos",test_cosine);
  CU_add_test(suite,"tan",test_tan);
  CU_add_test(suite,"Cot",test_Cot);
  CU_add_test(suite,"Sec",test_Sec);
  CU_add_test(suite,"cosine",test_Cosec);
    /* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) 
{
  CU_ASSERT(30 == add(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) 
{
  CU_ASSERT(-3 == subtract(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}
void test_multiply(void)
{
    CU_ASSERT_DOUBLE_EQUAL(multiply(4.21,2), 8.420, 0);
    CU_ASSERT_DOUBLE_EQUAL(multiply(-3.2,2),-6.400,0);
}
void test_divide(void)
{
    CU_ASSERT_DOUBLE_EQUAL(divide(6.7,2), 3.350, 0);
    CU_ASSERT_DOUBLE_EQUAL(divide(6.7,0), 0, 0);
}
/*
void test_multiply(void) 
{
  CU_ASSERT(0 == multiply(1, 0));
  
   Dummy fail 
  CU_ASSERT(2 == multiply(2, 5));
}
*/


/*
void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
   Dummy fail
  CU_ASSERT(3 == divide(2, 2));
}
*/
void test_factorial(void)
{
  CU_ASSERT(120==factorial(5));
}
void test_isarmstrong(void)
{
  CU_ASSERT(1==isarmstrong(153));
}
void test_prime(void)
{
  CU_ASSERT(0==isprime(7));
}
void test_squareroot(void)
{
    CU_ASSERT_DOUBLE_EQUAL(squareroot(144) , 12, 0);
    CU_ASSERT_DOUBLE_EQUAL(squareroot(98) , 9.899, 0);

}
void test_sine(void)
{
    CU_ASSERT_DOUBLE_EQUAL(sine(90) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(sine(0) , 0, 0);  
}

void test_cosine(void)
{
    CU_ASSERT_DOUBLE_EQUAL(cosine(0) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(cosine(45) , 0.707107, 0.1);  
}

void test_tan(void)
{
    CU_ASSERT_DOUBLE_EQUAL(Tan(45) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(Tan(0) , 0, 0);   
}
void test_Cot(void)
{
    CU_ASSERT_DOUBLE_EQUAL(Cot(45) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(Cot(90) , 0, 0.1);   
}
void test_Sec(void)
{
    CU_ASSERT_DOUBLE_EQUAL(Sec(0) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(Sec(45) , 1.414214 , 0.1);   
}
void test_Cosec(void)
{    
    CU_ASSERT_DOUBLE_EQUAL(Cosec(90) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(Cosec(45) , 1.414214 , 0.1); 

}

