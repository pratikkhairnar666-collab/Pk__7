#include<stdio.h>
int main(){
   int choice;
   int a,b;
   
   printf("\n====MY CALCULATOR====\n");
   printf("1. Addition\n");
   printf("2. Substraction\n");
   printf("3. Multiplication\n");
   printf("4. Division\n");
   
   printf("enter the choice:");
   scanf("%d",&choice);
   
   printf("Enter two numbers:");
   scanf("%d %d",&a,&b);
   
   switch(choice){
      case 1:
      printf("Result = %d",a + b);
      break;
      
      case 2:
      printf("Result = %d",a - b);
      break;
      
      case 3:
      printf("Result = %d",a * b);
      break;
      
      case 4:
      if(b != 0)
        printf("Result = %d",a / b);
      else
        printf("Division is not possible:");
      break;
      
      default:
        printf("invalid Choice:");
   }
   return 0;
}