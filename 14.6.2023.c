#include <stdio.h>

#define PI 3.14159
int main()
{
    //Question number 1
    int num1,odd,even;

    printf("Enter the number \n");
    scanf("%d",&num1);

    if(num1%2==0)
    {
    printf("The number is even \n");
    }
    else
    {
    printf("The number is odd \n");
    }

    printf("The number is %d \n",num1);


    int number;

    printf("Enter the number \n");
    scanf("%d",&number);

    switch (number%2)
    {
        case 0:
          printf("%d is even \n",number);
          break;
        case 1:
            printf("%d is odd \n",number);
            break;
    }


   //Question number 2
   int choice;
   float num1,num2,result;

   printf("Menu driven calculator \n");
   printf("1. Addition (+)\n");
   printf("2. Subtraction (-)\n");
   printf("3. Multiplication (*)\n");
   printf("4. Division (/)\n");
   printf("Enter your choice (1-4)");
   scanf("%d",&choice);

   printf("Enter two numbers \n");
   scanf("%f %f",&num1,&num2);

   switch(choice)
   {
   case 1:
    result = num1 + num2;
    printf("Result: %.2f\n",result);
    break;
    case 2:
    result = num1 - num2;
    printf("Result: %.2f\n",result);
    break;
    case 3:
    result = num1 * num2;
    printf("Result: %.2f\n",result);
    break;
    case 4:
     if(num2 !=0)
     {
         result = num1/num2;
         printf("Result: %.2f\n",result);
     }
     else
     {
         printf("Error: Division by zero!\n");
     }
     break;
    default:
        printf("Invalid choice!\n");
   }



   //Question number 3
   int choice;
   float radius,volume;

   printf("Menu \n");
   printf("1. Calculate the circumference of the circle\n");
   printf("2. Calculate the area of the circle \n");
   printf("3. Calculate the volume of the sphere \n");
   printf("Enter your choice (1-3):");
   scanf("%d",&choice);

   printf("Enter the radius:");
   scanf("%f",&radius);

   switch(choice)
   {
   case 1:
    {
        float circumference = 2*3.14*radius;
        printf("Circumference of the circle : %.2f\n",circumference);
        break;
    }
   case 2:
    {
        float area = 3.14*(radius,2);
        printf("Area of the circle:%.2f\n",area);
        break;
    }
   case 3:
    {
        float voloume = (4.0/3.0)*3.14*(radius,3);
        printf("Volume of the sphere:%.2f\n",volume);
        break;
    }
   default:
     printf("Invalid choice\n");
   }


   //Question number 4
   char letter;

   printf("Enter the Character\n");
   scanf("%c",&letter);

   switch(letter)
   {
   case 'a':
   case 'A':
   case 'e':
   case 'E':
   case 'i':
   case 'I':
   case 'o':
   case 'O':
   case 'u':
   case 'U':
      printf("%c is a vowel \n",letter);
      break;
  default:
   printf("%c is not a vowel \n",letter);
   }

}
