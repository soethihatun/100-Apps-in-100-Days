
/*************************************************
 
 Day - 6
 " Fahrenheit to Centigrade "
 
 Ques : Write a program to convert the temperature centigrade from given Fahrenheit.

 
*************************************************/


/*
============== Pseudo ==============
    1. Start
    2. Create a variable and ask for user's input
    3. Use it in the formula
        C = (5/9) * (F - 32)
    4. End 
   
=============== code ===============
*/


/////////////// Source ///////////////

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Create an integer type variable and ask for user input
    printf("Temparature in Fahrenheit : ") ;
    int fahren = GetInt() ;
    
    // Use formula and convert
    // Calculate and print out directly
    // :<!!! --- Notice! I don't know how to make the answer to be only two decimal places
    printf("%i F = %f C\n", fahren, ((5.0/9)*(fahren - 32)));
    
}

//////////////// Code ////////////////



