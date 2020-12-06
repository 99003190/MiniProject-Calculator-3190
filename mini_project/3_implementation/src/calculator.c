#include <stdlib.h>
#include<math.h>
#include "calculator.h"
//#define PI 3.14159265
int add(int operand1, int operand2)
{
    return (operand1 + operand2);
}

int subtract(int operand1, int operand2)
{
    return (operand1 - operand2);
}

double multiply(double operand1, double operand2)
{
    return (operand1 * operand2);
}

double divide(double operand1, double operand2)
{
    if(operand2 == 0)
        return 0;
    else
        return (operand1 / operand2);
}

int factorial(int operand1)
{
  if(operand1<0)
   return -1;
  else if(operand1==0 ||operand1==1)
    return 1;
  else
  {
    int fact;
    for (int loop_var = 1; loop_var <=operand1 ; ++loop_var)
    {
          fact *= loop_var;
    }
    return fact;
  }
}

int isarmstrong(int operand1)

{
    int temp_operand,loop_var=0,remainder=0,result=0;
    for (temp_operand = operand1; temp_operand != 0; ++loop_var)
    {
       temp_operand /= 10;
    }

   for (temp_operand = operand1; temp_operand != 0; temp_operand /= 10)
   {
       remainder = temp_operand % 10;

      // store the sum of the power of individual digits in result
      result +=(remainder*remainder*remainder);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == operand1)
    return 1;
   else
    return 0;
}  


int isprime(int operand1)
{
    int flag=0;
    if(operand1>1)
    {
        for (int loop_var = 2; loop_var <= operand1 / 2; loop_var++) 
        {

        // condition for non-prime
             if (operand1 % loop_var == 0) 
             {
                 flag = 1;
                break;
             }
        }
    return flag;
    }
}       
 
double squareroot(double operand1)
{
    return sqrt(operand1);
}
/*
float sine(float x)
{
    return (sin (x*PI/180));
}
float cosine(float x)
{
    return (cos (x*PI/180));
}
float tangent(float x)
{
    return (tan(x*PI/180));
}
float sineh(float x)
{
    return (sinh(x));
}
float cosineh(float x)
{
    return (sinh(x));
}
float tangenth(float x)
{
    return (sinh(x));
}
*/
double cosine(double m){
    m=m/57.295779513;
    printf("cosine of angle is ");
    double result=cos(m);
    return result;
}
double sine(double m){
    m=m/57.295779513;
    printf("sine of angle is ");
    double result=sin(m);
    return result;
}
double Tan(double m){
    m=m/57.295779513;
    printf("tan of angle is ");
    double result=tan(m);
    return result;
}
double Cot(double m){
    m=m/57.295779513;
    printf("Cot of angle is ");
    double result=1/tan(m);
    return result;
}
double Sec(double m){
    m=m/57.295779513;
    printf("Sec of angle is ");
    double result=1/cos(m);
    return result;
}
double Cosec(double m){
    m=m/57.295779513;
    printf("Cosec of angle is ");
    double result=1/sin(m);
    return result;
}
