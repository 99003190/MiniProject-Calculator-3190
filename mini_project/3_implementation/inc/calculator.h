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
int add(int operand1,int operand2);

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
double multiply(double operand1,double operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
double divide(double operand1,double operand2);

int factorial(int operand1);

int isarmstrong(int operand1);

int isprime(int operand1);
 
double squareroot(double operand1);

double cosine(double);
double sine(double);
double Tan(double);
double Cot(double);
double Sec(double);
double Cosec(double m);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */