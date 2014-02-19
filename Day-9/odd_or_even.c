
/*************************************************
 
 Day - 9 
 " Odd or Even "
 
 Ques : Write an application that determines and prints whether it is odd or even.

 
*************************************************/


/*
============== Pseudo ==============
    1. Start
    2. Ask for a number from the user
    3. check the number : 3 states, 1.even   2.odd   3.zero
        if number can be divided by 2,
            it is even
        if not,
            odd
    4. End
   
=============== code ===============
*/


/////////////// Source ///////////////

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask for a number
    printf("Enter a number : ");
    int num = GetInt();
    
    // Check now, 
    // num can also be zero as I suppose, "Zero is not an even number."
    if (num == 0)
    {
        printf("Your number is zero.\n");
    }
    
    else if (num % 2 == 0)
    {
        printf("The number is even.\n");
    }
        
    else
    {
        printf("The number is odd.\n");
    }
        
}


//////////////// Code ////////////////


// Code with notes
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask for a number
    printf("Enter a number : ");
    int num = GetInt();
    
    // Check now, 
    // num can also be zero as I suppose, "Zero is not an even number."
    if (num == 0)
    {
        printf("Your number is zero.\n");
    }
    
    // % is actually a modulus. It takes the remainder from the division process.
    // e.g., 7 % 2 is 1 and 9 % 3 is 0.
    else if (num % 2 == 0)
    {
        printf("The number is even.\n");
    }
        
    else
    {
        printf("The number is odd.\n");
    }
        
}


xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/



