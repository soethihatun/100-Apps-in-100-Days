
/*************************************************
 
 Day - 13
 " Average Temparature "
 
 Ques : Write a program to calculate the average temprature from the maximum 
 and minmun temperature obtained on a particular day.

 
*************************************************/


/*
============== Pseudo ==============
    1.Start
    2.Ask for maximum and minmum temperature from the user
    3.Calcuilate the average temperature : 
      average_temperature = (maximum + minum) / 2
    4.Print out the average_temperature    
   
=============== code ===============
*/

/////////////// Source ///////////////

#include <stdio.h>

int main(void)
{
    // Create variables for temperature
    int max_temp, min_temp;
    
    // Ask from user
    printf("What is maximum temperature?  ");
    scanf("%i", &max_temp);
    
    printf("What is minimum temperature?  ");
    scanf("%i", &min_temp);
    
    // Calculate the average temperature
    int avg_temp = (max_temp + min_temp) / 2;
    
    printf("The average temperature is %i.\n", avg_temp);
    
}


//////////////// Code ////////////////


