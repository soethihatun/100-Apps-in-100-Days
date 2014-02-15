
/*************************************************
 
 Day - 5
 " Positive or Negative? "
 
 Ques : Ask for a number from the user and check the number is positive or negative. 
 Assume the number is an integer.

 
*************************************************/


/*
============== Pseudo ==============
    1. Start
    2. Create a variable
    3. Ask for a number from the user
    4. check =>  
        if number < 0 :
            print "Negative"
        otherwise if number = 0 :
            print "Zero"
        otherwise 
            print "Positive"
    5. End      
   
=============== code ===============
*/


/////////////// Source ///////////////

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Create a variable in integer type
    printf("Enter a number, please.\t") ;
    int num = GetInt() ;
    
    // Check the number
    // It's negative if the number is less than 0
    if ( num < 0 )
        {
            printf( "Negative.\n" ) ;
        }
    
    // It's zero if the number is equal to 0
    else if ( num == 0 )
        {
            printf("Zero.\n") ;
        }

    // Now it's greater than 0 & so it's positive
    else
        {
            printf( "Positive.\n" ) ;
        }
    
}


//////////////// Code ////////////////


// Code with fewet comments
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Enter a number, please.\t") ;
    int num = GetInt() ;
    
    if ( num < 0 )
        {
            printf( "Negative.\n" ) ;
        }
    
    else if ( num == 0 )
        {
            printf("Zero.\n") ;
        }

    else
        {
            printf( "Positive.\n" ) ;
        }
    
}

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


