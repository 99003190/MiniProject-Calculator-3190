#include "calculator.h"
#include<stdio.h>
//#include<stdio_ext.h>


/* Display the menu of operations supported */
void calculator_menu(void);
int  val=0;
float val1=0;

/* Start of the application */
int main()
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}
void calculator_menu(void)
{
    int calculator_operation;
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Factorial\n6. Angstrom\n7. Primeno check\n8. Even_Odd check\n9. Circle area\n10.Cirlce perimeter\n11. Square area");
    printf("\n12. Square perimeter\n 13.Rectngle area\n 14.Rectangle perimeter\n15. Triangle area\n16. Triangle perimeter 17. Exit");
    printf("\n\tEnter your choice\n");
   
     
    scanf("%d", &calculator_operation);

   
    
  
  
  switch(calculator_operation)
    {
        case 1:
            int calculator_operand1,calculator_operand2;
            scanf("%d %d", &calculator_operand1, &calculator_operand2);
            
           val= add(calculator_operand1, calculator_operand2);
            printf("%d",val);
            
            
            break;
        case 2:
            int calculator_operand1,calculator_operand2;
            scanf("%d %d", &calculator_operand1, &calculator_operand2);
            
             val=subtract(calculator_operand1, calculator_operand2);
            
            
            printf("%d",val);
            break;
        case 3:
            double calculator_operand1,calculator_operand2;
            scanf("%lf %lf", &calculator_operand1, &calculator_operand2);
            
             val=multiply(calculator_operand1, calculator_operand2);
            
            printf("%d",val);
           
            break;
        case 4:
            double calculator_operand1,calculator_operand2;
            scanf("%lf %lf", &calculator_operand1, &calculator_operand2);
            
             val=divide(calculator_operand1,calculator_operand2);
         case 5:
            int calculator_operand1, calculator_operand2;
            scanf("%d", &calculator_operand1);
             val=factorial(calculator_operand1);
            if(val<0)
              printf("No factorial for negative no");
            else 
             printf(" Factorial=%d",val);
            break;
        case 6:
            int calculator_operand1;
             scanf("%d",&calculator_operand1);
              val=isarmstrong(calculator_operand1);
             if(val=0)
                     printf("NOT ANGSTROM");
             else
                     printf("ANGSTROM");
             break;
        case 7:
            int calculator_operand1;
             scanf("%d",&calculator_operand1);
              val=isprime(calculator_operand1);
             if(val=1)
                     printf("\nNOT PRIME");
             else
                     printf("\nPRIME");
             break;          
        case 8:
        {

            double calculator_operand1=0;
            printf("Enter number ");
            scanf("%lf", &calculator_operand1);
            printf("Square root is: %.3lf",sqareroot(calculator_operand1));
            break;      
            
            
            printf("%d",val);
            break;
             default:
            printf("\n\t---It should never come here---\n");
    }
}
}
