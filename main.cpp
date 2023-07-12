/*  Vectors Section Challenge
    
    Write a C++ program as follows:
    
    Declare 2 empty vectors of integers named
    vector1 and vector 2, respectively.
    
    Add 10 and 20 to vector1 dynamically using push_back
    Display the elements in vector1 using the at() method as well as its size using the size() method
    
    Add 100 and 200 to vector2 dynamically using push_back
    Display the elements in vector2 using the at() method as well as its size using the size() method

    Declare an empty 2D vector called vector_2d
    Remember, that a 2D vector is a vector of vector<int>
    
    Add vector1 to vector_2d dynamically using push_back
    Add vector2 to vector_2d dynamically using push_back
    
    Display the elements in vector_2d using the at() method
    
    Change vector1.at(0) to 1000
    
    Display the elements in vector_2d again using the at() method
    
    Display the elements in vector1 
    
    What did you expect? Did you get what you expected? What do you think happended?
*/
    
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> vector1;
    vector <int> vector2;
    
    // Part 1
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "The size of vector1 is: " << vector1.size() << endl;
    cout << "The first element of vector1 is: " << vector1.at(0) << endl;
    cout << "The second element of vector1 is: " << vector1.at(1) << endl;
    
    // Part 2
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "The size of vector2 is: " << vector2.size() << endl;
    cout << "The first element of vector2 is: " << vector2.at(0) << endl;
    cout << "The second element of vector2 is: " << vector2.at(1) << endl;
    
    
    // Part 3 -> 2D vector
    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "The size of vector_2d is: " << vector_2d.size() << endl;
    cout << "Element (0,0): " << vector_2d.at(0).at(0) << endl;
    cout << "Element (0,1): " << vector_2d.at(0).at(0) << endl;
    cout << "Element (1,0): " << vector_2d.at(1).at(0) << endl;
    cout << "Element (1,1): " << vector_2d.at(1).at(1) << endl;

    
    // Part 4 - Changing original vector elements
    vector1.at(0) = 1000;

    // Display 2d vector elements again
    cout << "\n\nElement (0,0): " << vector_2d.at(0).at(0) << endl;
    cout << "Element (0,1): " << vector_2d.at(0).at(0) << endl;
    cout << "Element (1,0): " << vector_2d.at(1).at(0) << endl;
    cout << "Element (1,1): " << vector_2d.at(1).at(1) << endl;
    
    // Display vector1 elements again
    cout << "\n\nThe size of vector1 is: " << vector1.size() << endl;
    cout << "The first element of vector1 is: " << vector1.at(0) << endl;
    cout << "The second element of vector1 is: " << vector1.at(1) << endl;
    
    
    
    /* Because vector_2d was assigned vector1 prior to the change to 1000 the
       original values are the ones contained in the 2d vector.
    */
    
    

    cout << endl;
    return 0;
}