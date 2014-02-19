
/*************************************************
 
 Day - 10
 " Largest number "
 
 Ques : Write an application to test the three numbers and display 
 the largest number followed by the words "is larger". If the numbers
 are equal, print the message "These numbers are equal."
 
 
*************************************************/


/*
============== Pseudo ==============
    1.Start
    2.Ask for three numbers from user
    3.check the numbers 
        - Larger
        - Equal
   
=============== code ===============
*/

/////////////// Source ///////////////

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask for three integers
    printf("Enter number 1 : ");
    int num1 = GetInt();
    
    printf("Enter number 2 : ");
    int num2 = GetInt();
    
    printf("Enter number 3 : ");
    int num3 = GetInt();
    
    // Check which one is larger
    if (num1 > num2 && num1 > num3)
        printf("%i is larger than %i and %i.\n", num1, num2, num3);
    
    else if (num2 > num1 && num2 > num3)
        printf("%i is larger than %i and %i.\n", num2, num1, num3);
    
    else if (num3 > num2 && num3 > num1)
        printf("%i is larger than %i and %i.\n", num3, num2, num1);
        
    else
        printf("These numbers are equal.\n");
        
}


//////////////// Code ////////////////


// Code with notes
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask for three integers
    printf("Enter number 1 : ");
    int num1 = GetInt();
    
    printf("Enter number 2 : ");
    int num2 = GetInt();
    
    printf("Enter number 3 : ");
    int num3 = GetInt();
    
    // Check which one is larger
    // For num1 largest
    if (num1 > num2 && num1 > num3)
        printf("%i is larger than %i and %i.\n", num1, num2, num3);
    
    // For num2
    else if (num2 > num1 && num2 > num3)
        printf("%i is larger than %i and %i.\n", num2, num1, num3);
    
    // For num3
    else if (num3 > num2 && num3 > num1)
        printf("%i is larger than %i and %i.\n", num3, num2, num1);
        
    // User input numbers could be equal.
    else
        printf("These numbers are equal.\n");
        
}


xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


