// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

void printNumbers(const vector <int>& numbers){
    // A function to print all of the numbers in the list
    cout << "[ " ;
    
    for (auto number : numbers){
        cout << number << " " ;
    }
    
    cout << "] " ;
}

void addNumbers(vector <int>& numbers){
    // A function to add numbers to the back of the list
    cout << "Please enter the number that you would like to add to the list: ";
    int number;
    cin >> number;
    
    numbers.push_back(number);
    
    cout <<  " " << number << " has been added to the list"; 
    
    printNumbers(numbers);
}

void displayMean(const vector <int>& numbers){
    // A function to calculate and display the mean of the numbers in the list
    
    int sum {0};
    for (auto number : numbers){
        sum += number;
    }
    
    float mean = sum / float(numbers.size());

    cout << " There are " << numbers.size() << " numbers in the list and the mean is " << mean << endl;
}


void findSmallest(const vector <int>& numbers){
    // A function to find the smallest element in the list
    
    if (numbers.size() == 0){
        cout << "Unable to determine the smallest number - list is empty" << endl;
    } else {
        auto smallest = min_element(numbers.begin(), numbers.end());
        cout << "The smallest number in the list is: " << *smallest << endl;
    }
    
}

void findLargest(const vector <int>& numbers){
    // A function to find the largest element in the list
    
    if (numbers.size() == 0){
        cout << "Unable to determine the smallest number - list is empty" << endl;
    } else {
        auto largest = max_element(numbers.begin(), numbers.end());
    
        cout << "The largest number in the list is: " << *largest << endl;
    }    
    
    
}


void findNumber(const vector <int>& numbers){
    // A find a number in the list
    cout << "Enter the number you would like to search for: " << endl;
    int numberToFind {0};
    cin >> numberToFind;
    
    int count {0};
    
    for (auto number : numbers){
        if (number == numberToFind){
            count += 1;
        }
    }
    
    cout << numberToFind << " appears in the list " << count << " times" << endl;
}

int main() {
    
    vector <int> numbers {10, 23, 45, 12, 23};
    
    printNumbers(numbers);
    
    cout << "MENU: \nP - Print numbers \nA - Add a number \nM - Display mean of the numbers \nS - Display the smallest number";
    cout << "\nL - Display the largest number \nF - Find how much a number appears in the list \nQ - Quit " << endl;
    
    
    char choice = ' ';
    cout << "User choice: ";
    cin >> choice;
    
    choice = toupper(choice);
    
    // Switch statement controlling the program
    
    switch (choice){
        case 'P':
            printNumbers(numbers);
            break;
        case 'A':
            addNumbers(numbers);
            printNumbers(numbers);
            break;
        case 'M': 
            displayMean(numbers);
            break;
        case 'S':
            findSmallest(numbers);
        case 'L':
            findLargest(numbers);
        case 'F':
            findNumber(numbers);        
        case 'Q':
            cout << "Goodbye!";
            return 0;

    }
    
    return 0;
}
