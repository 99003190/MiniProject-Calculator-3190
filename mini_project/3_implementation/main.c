#include "calculator.h"
#include<stdio.h>
//#include<stdio_ext.h>


/* Display the menu of operations supported */
void calculator_menu(void);
int  val=0;
//float val1=0;

/* Start of the application */
int main()
{
    printf("\n*****Calculator*****\n");
    while(1)
    {
        calculator_menu();
    }
}
void calculator_menu(void)
{
    int calculator_operation,choice;
    printf("\nAvailable Operations\n");
    printf("\n1. Arithmetic\n2. Trigonometric\n3. Other\n4. Exit\t");
    scanf("%d", &choice);
    //printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Factorial\n6. Angstrom\n7. Primeno check\n8. Square Root");
    //printf("\n17. Exit");
    
   
    
  
  
  switch(choice)
    {
        

        case 1:
        {
            printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Factorial\n6. Square Root\n7. exit");
            printf("\n\tEnter your choice\t");
            scanf("%d", &calculator_operation);
            switch(calculator_operation)
            {
                

                case 1:
                {
                    int calculator_operand1,calculator_operand2;
                     scanf("%d %d", &calculator_operand1, &calculator_operand2);
                     val= add(calculator_operand1, calculator_operand2);
                     printf("%d",val);
                }
                break;
                case 2:
                {
                    int calculator_operand1,calculator_operand2;
                    scanf("%d %d", &calculator_operand1, &calculator_operand2);
                    val=subtract(calculator_operand1, calculator_operand2);
                    printf("%d",val);
                }
                break;
                case 3:
                {
                     double calculator_operand1,calculator_operand2;
                    scanf("%lf %lf", &calculator_operand1, &calculator_operand2);
                     printf("%0.2lf",multiply(calculator_operand1, calculator_operand2));
           
                }
                break;
                case 4:
                {
                     double calculator_operand1,calculator_operand2;
                    scanf("%lf %lf", &calculator_operand1, &calculator_operand2);
                     printf("%0.2lf",divide(calculator_operand1,calculator_operand2));
                }
                break;
                case 5:
                {
                    int calculator_operand1, calculator_operand2;
                     scanf("%d", &calculator_operand1);
                    val=factorial(calculator_operand1);
                    if(val<0)
                     printf("No factorial for negative no");
                    else 
                     printf(" Factorial=%d",val);
                }
                case 6:
                {
                    double calculator_operand1;
                    printf("Enter number ");
                    scanf("%lf", &calculator_operand1);
                    printf("Square root is: %.3lf",squareroot(calculator_operand1));
                }
                case 7:
                    exit(0);
                default:
                    printf("\n not applicable");


            }
            
           
            
        }
        break;
        case 2:
        {
            //should add trigonometric
            printf("trigonometry");
            
             
           
        }
         break;
            
        case 3:
        {
            printf("\n1. Angstrom\n2. Primeno check\n3. exit");
            printf("\n\tEnter your choice\t");
   
     
            scanf("%d", &calculator_operation);

            switch(calculator_operation)
            {
                case 1:
                {
                    int calculator_operand1;
                    scanf("%d",&calculator_operand1);
                     val=isarmstrong(calculator_operand1);
                    if(val=0)
                        printf("NOT ANGSTROM");
                    else
                         printf("ANGSTROM");
                }
                break;
                case 2:
                {
                    int calculator_operand1;
                    scanf("%d",&calculator_operand1);
                    val=isprime(calculator_operand1);
                    if(val==1)
                        printf("\nNOT PRIME");
                    else
                         printf("\nPRIME");
                }
                break;
                case 3:
                    exit(0);
                default:
                    printf("\n not applicable ");
            }
        }
        break;     
        case 4:
<<<<<<< HEAD
            exit (0); 
=======
        {
             double calculator_operand1,calculator_operand2;
            scanf("%lf %lf", &calculator_operand1, &calculator_operand2);
            
            
             printf("%d",divide(calculator_operand1,calculator_operand2));
        }
        break;
           
        case 5:
        {
            int calculator_operand1, calculator_operand2;
            scanf("%d", &calculator_operand1);
             val=factorial(calculator_operand1);
            if(val<0)
              printf("No factorial for negative no");
            else 
             printf(" Factorial=%d",val);
        }
         break;
        case 6:
        {
            int calculator_operand1;
             scanf("%d",&calculator_operand1);
              val=isarmstrong(calculator_operand1);
             if(val=0)
                     printf("NOT ARMSTRONG");
             else
                     printf("ARMSTRONG");
        }
        break;
        case 7:
        {
            int calculator_operand1;
             scanf("%d",&calculator_operand1);
              val=isprime(calculator_operand1);
             if(val=1)
                     printf("\nNOT PRIME");
             else
                     printf("\nPRIME");
                  
        }
        break; 
                
        case 8:
        {
            double calculator_operand1;
            printf("Enter number ");
            scanf("%lf", &calculator_operand1);
            printf("Square root is: %.3lf",squareroot(calculator_operand1));
        }
        break;      
>>>>>>> 059bc010424651a772f31c949c7ee1e88aa4b34b
        default:
            printf("\n\t---It should never come here---\n");
    }
}

