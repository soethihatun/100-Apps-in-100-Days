
/*************************************************

 Day - 2
 "Hello, Soe Thiha"
 Soe Thiha
 
 Ques : Write a program that includes at least one variable that has the default value
 entered or set by the programmer. And say "Hello" with that variable.
 
*************************************************/


/*
============== Pseudo ==============

    1. Start
    2. Declare a variable
    3. Assign a name value to that variable
    4. Print a message "Hello, Soe" as example
    5. End

=============== code ===============
*/

/////////////// Source ///////////////

# include <stdio.h>
# include <cs50.h>      // cs50 is the header file from cs50 appliance

int main(void)
{
    // Declare and assign a variable
    string name = "Soe Thiha";
    
    // Print the message with the value from variable
    printf("Hello, %s!\n", name);
    
}



//////////////// Code ////////////////


// Code without comments
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


# include <stdio.h>
# include <cs50.h>

int main(void)
{
    string name = "Soe Thiha";
    printf("Hello, %s!\n", name);
    
}


xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/



