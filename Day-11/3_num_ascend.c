
/*************************************************
 
 Day - 10
 " Three numbers ascending  "
 
 Ques : Write an application that inputs three numbers and 
 sort them into
 ascending order.

 
*************************************************/


/*
============== Pseudo ==============
    1.Start
    2.Ask for three numbers
    3.Check and sort them into ascending equence 
        - e.g, 3, 2, 1(worst case) => 1, 2, 3(best case)
        - 0 => 3, 2, 1
        - 1 => 2, 3, 1
        - 2 => 2, 1, 3
        - 3 => 1, 2, 3
    4.End
   
=============== code ===============
*/

/////////////// Source ///////////////

#include <stdio.h>

int main(void)
{
    // declare some variables
    int num1, num2, num3;
    int temp;
    
    // Ask for user input
    printf("Enter num 1 : ");
    scanf("%i", &num1);
    
    printf("Enter num 2 : ");
    scanf("%i", &num2);
    
    printf("Enter num 3 : ");
    scanf("%i", &num3);
    
    // Print out the user's input first
    // --------------\n is used just as the separtor. (not important, not urgent)
    printf("--------------\nThe ascending sequence of %i, %i and %i is \n", num1, num2, num3);
    
    // Check and sort
    if (num1 > num2)
    {   
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    if (num2 > num3)
    {
        temp = num3;
        num3 = num2;
        num2 = temp;
    }
    if (num1 > num2)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    
    // Print the result to the user
    printf("%i, %i, %i.\n", num1, num2, num3);
}


//////////////// Code ////////////////


// Code with notes
/*xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

#include <stdio.h>

int main(void)
{
    // declare some variables
    int num1, num2, num3;
    int temp;   // temp is just a temporary variable to store some data for a while
    
    // Ask for user input
    printf("Enter num 1 : ");
    scanf("%i", &num1);     // scanf is also a funciton for stdio.h that is used to accept user's input data
    
    printf("Enter num 2 : ");
    scanf("%i", &num2);
    
    printf("Enter num 3 : ");
    scanf("%i", &num3);
    
    // Print out the user's input first
    // --------------\n is used just as the separtor. (not important, not urgent)
    printf("--------------\nThe ascending sequence of %i, %i and %i is \n", num1, num2, num3);
    
    // Check and sort
    // if statements are better to be used here
    if (num1 > num2)
    {   
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    if (num2 > num3)
    {
        temp = num3;
        num3 = num2;
        num2 = temp;
    }
    if (num1 > num2)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    
    // Print the result to the user
    printf("%i, %i, %i.\n", num1, num2, num3);
}


xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx*/


