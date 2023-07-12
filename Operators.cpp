// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {

    cout << "Enter the amount in cents: " << endl;
    int startingAmount {0};
    cin >> startingAmount;
    
    // Initialise the values
    int dollars, quarters, dimes, nickels, pennies;
    
    

//    // Method 1 -> without modulo operator
    
    dollars = startingAmount / 100;
    int remainder;
    
    remainder = startingAmount - (dollars * 100);
    
    quarters = remainder / 25; 
    remainder -= quarters * 25; 
    
    dimes = remainder / 10;
    remainder -= dimes * 10;
    
    nickels = remainder / 5;
    remainder -= nickels * 5;
    
    pennies = remainder / 1; 
    remainder -= pennies * 1;
    
    
    cout << "The amount can be changed into: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
    
    cout << "The remainder is: " << remainder << endl;
    
    
    

// Method 2 -> with the modulo operator

    
    dollars = startingAmount / 100;
    int remainder;
    
    remainder = startingAmount % 100;;
    
    quarters = remainder / 25; 
    remainder %= 25; 
    
    dimes = remainder / 10;
    remainder %= 10;
    
    nickels = remainder / 5;
    remainder %= 5;
    
    pennies = remainder / 1; 
    remainder %= 1;
    
    
    cout << "The amount can be changed into: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
    
    cout << "The remainder is: " << remainder << endl;



    return 0;
}


