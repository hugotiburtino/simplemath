#include <stdio.h>

int main (void) {
 char operation;
 float number1, number2, result;

 printf("SIMPLE CALCULATOR\n");
 printf("Give me the first number: ");
 scanf("%f",&number1);
 printf("Give me the second number: ");
 scanf("%f",&number2);
 printf("What operation? (+ - * /) ");
 scanf(" %c", &operation);
 printf("---------------------\n");
 
 switch(operation) {
   case '+' :
     result = number1 + number2;
     break;
   case '-' :
     result = number1 - number2;
     break;
   case '*' :
     result = number1 * number2;
     break;
   case '/' :
     result = number1 / number2;
     break;
   default :
     printf("Invalid operation\n" );
   }

   printf("%f \n", result);

   return 0;
}
