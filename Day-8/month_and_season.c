
/*************************************************
 
 Day - 8
 " Month and season "
 
 Ques : Which season is it in Myanmar according to the month number?

 
*************************************************/


/*
============== Pseudo ==============
    1. Start
    2. Ask for a month from the user
    3. Check month number :
       if month is in 3,4,5,6 : say," it's hot season"
       else if month is in 7, 8, 9, 10 : say, "it's rainy season."
       else if month is in 11, 12, 1, 2 : say, "it's cold season."
       else 
            say "Month number is out of range."
    4. End
   
=============== code ===============
*/


/////////////// Source ///////////////

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Create a variable for month number and ask for user input
    printf("Let me know your month number.  ");
    int month = GetInt();
    
    // Check the variable which season is in?
    if (month == 3 || month == 4 || month == 5 || month == 6)
    {
        printf("It's hot season.\n");
    }
    else if (month == 7 || month == 8 || month == 9 || month == 10)
    {
        printf("It's rainy season.\n");
    }
    else if (month == 11 || month == 12 || month == 1 || month == 2)
    {
        printf("It's cold season.\n");
    }
    else 
    {    
        printf("No month number like this!\n");
    }
}


//////////////// Code ////////////////


// Code with notes
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Create a variable for month number and ask for user input
    printf("Let me know your month number.  ");
    int month = GetInt();
    
    // Check the variable which season is in?
    if (month == 3 || month == 4 || month == 5 || month == 6)
    {
        printf("It's hot season.\n");
    }
    
    // here's the logical operator, || is OR operator. It's like Adding.
    else if (month == 7 || month == 8 || month == 9 || month == 10)
    {
        printf("It's rainy season.\n");
    }
    
    else if (month == 11 || month == 12 || month == 1 || month == 2)
    {
        printf("It's cold season.\n");
    }
    
    // Month number is invalid
    else 
    {    
        printf("No month number like this!\n");
    }
}


xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/



