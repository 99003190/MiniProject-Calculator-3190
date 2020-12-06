#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int add(int,int);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract(int,int);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int,int);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int,int);

int factorial(int operand1);

int isarmstrong(int operand1);

int isprime(int operand1);
 /*
int squareroot(int operand1);

int sine(int operand1);

int cos(int operand1);

int tan(int operand1);

int cosec(int operand1);

int sec(int operand1);

int cot(int operand1);

*/


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */