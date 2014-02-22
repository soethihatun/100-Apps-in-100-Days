
/*************************************************
 
 Day - 12
 " Tax and total price of three items "
 
 Ques : Write a program that will read in a tax rate (as a percentage) and 
 the prices of three items. The program is to calculate the total price, before 
 tax of the items, then the tax payable on those items. The tax payable is calculated 
 by applying the tax rate percentage to the total price. Print the total price and 
 the tax payable as output.

 
*************************************************/


/*
============== Pseudo ==============
    1.Start
    2.Ask for the price of three items and the tax rate in percentage
    3.total = price1 + price2 + price3
    4.tax = total * tax_rate
    5.print the total and tax
    6.End.
   
=============== code ===============
*/


/////////////// Source ///////////////

#include <stdio.h>

int main(void)
{
    // Create vriables
    int item_price1, item_price2, item_price3, tax_rate;
    
    // Ask for item prices from the user
    printf("Please enter price of item 1. ");
    scanf("%i", &item_price1);
    
    printf("Please enter price of item 2. ");
    scanf("%i", &item_price2);
    
    printf("Please enter price of item 3. ");
    scanf("%i", &item_price3);
    
    // Ask for tax rate
    printf("Enter tax rate now. ");
    scanf("%i", &tax_rate);
    
    // Calculate the total price + tax
    int total = item_price1+ item_price2+ item_price3;
    int tax = total * tax_rate / 100;
    int total_pay = total + tax;
    
    // Output 
    printf("\nTax is : %i.\n", tax);
    printf("Total price to pay is : %i.\n\n", total_pay);
    
}

//////////////// Code ////////////////


