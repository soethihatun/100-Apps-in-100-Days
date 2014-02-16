
/*************************************************
 
 Day - 7
 " Number and Month "
 
 Ques : Which month is it according to the number?

 
*************************************************/


/*
============== Pseudo ==============
    1. Start
    2. Create an integer type variable to store the month number from user
    3. Check what the number is -
        if month_num = 1 : "Jan"
        else if month_num = 2 : "Feb"
        .....
        else if month_num = 12 : "Dec"
    4. End
   
=============== code ===============
*/


/////////////// Source ///////////////

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask for month number from the user and store it in a variable
    printf("Tell me your month number :\t") ;
    int month_num = GetInt() ;
    
    // Check the condition with switch statement
    switch(month_num)
    {
        case 1 : printf("Jan\n"); break;
        case 2 : printf("Feb\n"); break;
        case 3 : printf("March\n"); break;
        case 4 : printf("April\n"); break;
        case 5 : printf("May\n"); break;
        case 6 : printf("Jan\n"); break;
        case 7 : printf("July\n"); break;
        case 8 : printf("Aug\n"); break;
        case 9 : printf("Sept\n"); break;
        case 10 : printf("Oct\n"); break;
        case 11 : printf("Nov\n"); break;
        case 12 : printf("Dec\n"); break;
        default : printf("Invalid month number!\n"); break;
    }
}


//////////////// Code ////////////////


// Code with notes
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask for month number from the user and store it in a variable
    printf("Tell me your month number :\t") ;
    int month_num = GetInt() ;
    
    // Check the condition with switch statement
    switch(month_num)
    {
        case 1 : printf("Jan\n"); break;
        case 2 : printf("Feb\n"); break;
        
        // if (month_num == 3 ) : print the following statement or do the following opearation
        case 3 : printf("March\n"); break;
        // why break?
        // "break;" is used to quit the switch as there is no need to do the following
        
        case 4 : printf("April\n"); break;
        case 5 : printf("May\n"); break;
        case 6 : printf("Jan\n"); break;
        case 7 : printf("July\n"); break;
        case 8 : printf("Aug\n"); break;
        case 9 : printf("Sept\n"); break;
        case 10 : printf("Oct\n"); break;
        case 11 : printf("Nov\n"); break;
        case 12 : printf("Dec\n"); break;
        default : printf("Invalid month number!\n"); break;
    }
}

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/



