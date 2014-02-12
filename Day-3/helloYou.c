
/*************************************************
 
 Day - 3
 " Hello, You! "
 
 Ques : Write a program that prints or says hello to the user with his input name.

 
*************************************************/


/*
============== Pseudo ==============

   1. Start
   2. Declare a variable to store data from the user eg., User's Name
   3. Prompt user to enter a Name
   4. Store it in the variable
   5. Print the message "Hello" with the value from the variable
   6. End
   
=============== code ===============
*/


/////////////// Source ///////////////

#include <cs50.h>
#include <stdio.h>

// Function main with type int
int main(void)
{

    // Declare a variable in string type
    // The type,'string' is defined in cs50 library
    string name;
    
    // Prompt the user to input his name
    // Without this prompt the user won't know what to do
    printf("Please enter your name.\t");
    
    // Store it in the declared variable
    // GetString() is also from cs50 library
    name = GetString();
    
    // Print the message "Hello" with the value from the variable
    // %s is used as the place holder for the variable in string type
    printf("Hello, %s!\n", name);
    
}

//////////////// Code ////////////////


// Code with fewer comments
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

#include <cs50.h>
#include <stdio.h>

// Function main with type int
int main(void)
{

    // Declare a variable in string type
    string name;
    
    // Prompt the user to input his name
    printf("Please enter your name.\t");
    
    // Store it in the declared variable
    name = GetString();
    
    // Print the message "Hello" with the value from the variable
    printf("Hello, %s!\n", name);
    
}

xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/



