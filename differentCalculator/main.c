//This program takes 3 inputs from the user 'input 1, operation, input2', and makes the operation. Program ends only when the user inputs "0,0,0".
//Created by Mehmet Akif Duran.

/*
 Example output:
 *************************************
 * Welcome to the Calculator Program *
 *************************************
 Please enter an expression: 0 0 0
 !!! The Program Ends !!!
 
 
 Example output 2:
 *************************************
 * Welcome to the Calculator Program *
 *************************************
 Please enter an expression: 4 + 3
 > RESULT = 7.0000
 Enter an operand and a number: / 2
 > RESULT = 3.5000
 Enter an operand and a number: { 5
 !!! ERROR: No such operator { !!!
 Enter an operand and a number: * 5
 > RESULT = 17.5000
 Enter an operand and a number: - 4
 > RESULT = 13.5000
 Enter an operand and a number: @ 4
 !!! ERROR: No such operator @ !!!
 Enter an operand and a number: ? 16
 !!! ERROR: No such operator ? !!!
 Enter an operand and a number: / 8
 > RESULT = 1.6875
 Enter an operand and a number: - 20
 > RESULT = -18.3125
 Enter an operand and a number: 0 0
 !!! The Program Ends ! ! !
 */

#include <stdio.h>

int main (void){
    
    
    //Variable declarations
    
    float num1, num2, result;
    char operator;
    
    //Executable statements
    printf("*************************************\n");
    printf("* Welcome to the Calculator Program \n *");
    printf("************************************* \n");

    printf("Please enter an expression: \n");
    scanf("%f %c %f", &num1,&operator,&num2);
    
    

    if(num1 ==0 && operator =='0' && num2==0){
        printf("! ! ! The Program Ends ! ! !");
        return 0;
    }
    
    
    
    switch(operator){
        case '+':
            result = num1 + num2;
            printf(">RESULT : %.4f\n",result);
            break;
            
        case '-':
            result = num1-num2;
            printf(">RESULT : %.4f\n",result);
            break;
            
        case '*':
            result = num1*num2;
            printf(">RESULT : %.4f\n",result);
            break;
            
        case '/':
            if(num2 != 0){
                result = num1/num2;
                printf(">RESULT : %.4f\n",result);
            }else {
                printf("You cannot divide a number to zero. Please try again. \n");
                return 1;
            } break;
            
        default:
            printf("You have entered an invalid operator. Please try again. \n");
            return 1;
    }
    
    
    
    do{
        printf("Enter an operand and a number\n");
        scanf(" %c %f",&operator,&num2);
        
        if (operator == '0' && num2 == 0) {
                    printf("!!! The Program Ends !!!\n");
                    return 0;
                }

        
        switch (operator){
            case '+':
                result += num2;
                printf(">RESULT : %.4f\n",result);
                break;
            case '-':
                result-=num2;
                printf(">RESULT : %.4f\n",result);
                break;
            case '*':
                result*=num2;
                printf(">RESULT : %.4f\n",result);
                break;
            case '/':
                if(num2 != 0){
                    result/=num2;
                    printf(">RESULT : %.4f\n",result);
                }else{
                    printf("You cannot divide a number to zero. Please try again.\n");
                    return 1;
                }break;
            default:
                printf("You have entered an invalid operator. Please try again. \n");
                return 1;
        }
       
        
    }while (operator != '0' || num2 != 0);
    


    return 0;
  }
   



