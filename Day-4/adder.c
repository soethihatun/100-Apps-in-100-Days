
/*************************************************
 
 Day - 4
 " Addition of two integers "
 
 Ques : Write a program that adds two integers.

 
*************************************************/


/*
============== Pseudo ==============

   1. Start
   2. Declare a variabe and prompt user to enter the first integer and store it.
   3. Do it for the second time.
   4. Add two numbers.
   5. Print out the result.
   6. End
   
=============== code ===============
*/


/////////////// Source ///////////////

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask user for 1st integer
    // GetInt() is a function from cs50
    // It means Get an Integer
    printf("Enter the first number : ");
    int num1 = GetInt();
    
    // Ask user for 1st integer
    // Declare the variable and assign the value immediately
    printf("Enter the second number : ");
    int num2 = GetInt();
    
    // Print the result directly doing the addition
    // %i is the placeholder of the variable for integer data type
    printf("%i + %i = %i \n", num1, num2, num1 + num2);
}

//////////////// Code ////////////////


// Code with fewer comments
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask user for 1st integer
    printf("Enter the first number : ");
    int num1 = GetInt();
    
    // Ask user for 1st integer
    printf("Enter the second number : ");
    int num2 = GetInt();
    
    // Print the result directly doing the addition
    printf("%i + %i = %i \n", num1, num2, num1 + num2);
}

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/



