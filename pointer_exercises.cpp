// Refresh of pointers

// Basic Pointer Usage:
// Write a program that declares an int variable and a pointer to it. Assign a value to the variable, and then use the pointer to modify this value.

// Array and Pointers:
// Create an array of integers. Write a function that takes a pointer to this array and its size, then sums the elements of the array using the pointer.

// Pointer Arithmetic:
// Given an array of integers, write a program to traverse the array using pointer arithmetic (i.e., incrementing the pointer, rather than using array indexing).

// Swap Function Using Pointers:
// Implement a function that swaps the values of two integers using pointers.

// Dynamic Memory Allocation:
// Write a program that dynamically allocates memory for an array of integers. Fill the array with numbers and then deallocate the memory safely.

// Pointers to Pointers:
// Create a pointer pointing to another pointer. Demonstrate how you can access and modify the value to which the second pointer points.

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Basic Reference Usage:
// Create a function that doubles the value of an integer passed by reference.

// Swap Function Using References:
// Similar to the pointer exercise, but this time implement the swap function using references.

// Function Returning a Reference:
// Write a function that returns a reference to an array element given its index. Test the function by modifying the returned value.

// References with Arrays:
// Create an array and write a function that returns the sum of its elements. The function should take the array as a reference.

// Sorting an Array Using References:
// Write a function that sorts an array of integers. Pass the array to this function by reference.

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Combined Pointer and Reference Exercises
// Comparing References and Pointers:
// Write a program that demonstrates the difference between passing variables by pointer and by reference to a function. Use a simple operation like incrementing a value.

// Function Overloading with Pointers and References:
// Overload a function so that it takes either a pointer or a reference, and then compare their behavior in a test program.

// Returning Pointers and References:
// Write two functions: one that returns a pointer and another that returns a reference. Compare how you would call and use these functions in a program.

// Mixing Arrays, Pointers, and References:
// Create a function that takes an array of integers. Use both pointers and references to modify the contents of the array.

#include <iostream>

void basic_pointer(int variable);
void array_pointers(int array_size, int *ptr);
void pointer_arithmetic(int *array, int array_size);
void swap_values(int *a, int* b);
void dynamic_memory_allocation(int size);
void pointer_to_pointer();

void basic_reference_usage(int& value);
void swap_with_references(int& a, int& b);
int& function_returning_reference(int* array, int index);
int sum_with_references(const int (&array)[], int size);
// void sort_array_with_references(int* array, int size);

// void compare_reference_and_pointer();
// void overloaded_functions(int& value);
// void overloaded_functions(int* value);
// int* function_returning_pointer(int* array, int index);
// void modify_array_with_pointers_and_references(int* array, int size);


using namespace std;

int main(){

//Q1
// basic_pointer(5);

//Q2
// int myArray[6] = {10, 20, 30, 40, 50, 60};
// array_pointers(sizeof(myArray) / sizeof(int), myArray);

//Q3
// int myArray[6] = {10, 20, 30, 40, 50, 60};
// cout << myArray << endl;
// pointer_arithmetic(myArray, sizeof(myArray) / sizeof(int));

//Q4
// int a = 123;
// int b = 321; 

// cout << "a: " << a << endl;
// cout << "b: " << b << endl;

// int *ptrA = &a;
// int *ptrB = &b;
// swap_values(ptrA, ptrB);  // Pass in the addresses of the two variables

// cout << "a: " << a << endl;
// cout << "b: " << b << endl;

// Q5
// int size = 0;
// cout << "Please enter the integer size of the array you would like to create: ";
// cin >> size;
// dynamic_memory_allocation(size);

// Q6
// pointer_to_pointer();

// Q7 
// int weight = 10;
// int &reference = weight;
// basic_reference_usage(reference);
// cout << "New Weight: " << weight << endl;  // 20

// Q8 
// int a = 101;
// int b = 999; 
// cout << "Before the swap: a: " << a << " | b: " << b << endl;

// int &refA = a;
// int &refb = b;
// swap_with_references(refA, refb);
// cout << "After the swap: a: " << a << " | b: " << b << endl;

// Q9
// int testArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// int *array = testArray;  // pointer pointing to the first element
// cout << "Please enter the index you would like to change: ";
// int index = 0;
// cin >> index;

// function_returning_reference(array, index);

// cout << "Element has changed:" << endl;
// cout << "[ ";
// for (int i = 0; i < 10; i++ ){
//     cout << testArray[i] << " ";
// }
// cout << "]" << endl;

//Q10
// int testArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// const int (&refToArray)[10] = testArray;

// int sum = sum_with_references(testArray, 10);
// cout << "Sum: " << sum << endl;  // 55




return 0;
}



void basic_pointer(int variable){
// Write a program that declares an int variable and a pointer to it. Assign a value to the variable, and then use the pointer to modify this value.

    int x = variable; // variable assigned
    int *y = &x; 
    cout << *y << endl;  // 5

    *y = 10;
    cout << *y << endl;  // 10
    cout << x << endl; // 10

}

void array_pointers(int array_size, int *ptr){
// Create an array of integers. Write a function that takes a pointer to this array and its size, then sums the elements of the array using the pointer.
    int sum = 0;

    cout << array_size << endl;
    cout << *ptr << endl;  // 10, points to the first element of the array
    cout << *(ptr + 1) << endl; // 20, points to second element

    for (int i = 0; i < array_size; i++){
        sum += *(ptr + i);  // adds dereferenced value to the sum
    }

    cout << "Sum: " << sum << endl;  // 120
}

void pointer_arithmetic(int *array_ptr, int array_size){
// Given an array of integers, write a program to traverse the array using pointer arithmetic (i.e., incrementing the pointer, rather than using array indexing).

    cout << array_ptr << endl; // address in memory (0x5ffe40)
    cout << *array_ptr << endl; // 10

    string array_string = "[";

    for (int x = 0; x < array_size; x++){
        array_string += to_string(*(array_ptr + x));
        array_string += ", ";
    }

    array_string = array_string.substr(0, array_string.size() - 2);  // removes the last 2 letters ", " from the string
    array_string += "]";

    cout << array_string << endl;  // [10, 20, 30, 40, 50, 60]

    
}

void swap_values(int *a, int *b){
    // Implement a function that swaps the values of two integers using pointers.
    cout << "The addresses of the variables are: " << a << " and " << b << endl;
    cout << "The address of 'a' is: " << a << "and the value of 'a' is: " << *a << endl;
    cout << "The address of 'b' is: " << b << "and the value of 'b' is: " << *b << endl;

    int c = *a;
    *a = *b; 
    *b = c;

    cout << "The address of 'a' is: " << a << "and the new value of 'a' is: " << *a << endl;
    cout << "The address of 'b' is: " << b << "and the new value of 'b' is: " << *b << endl;


}

void dynamic_memory_allocation(int size){
  // Write a program that dynamically allocates memory for an array of integers. Fill the array with numbers and then deallocate the memory safely.

    // Dynamically allocate memory using the 'new' operator
    int *myArray = new int[size];


    // Fill the array
    for(int i = 0; i < size; i++){
        myArray[i] = i;
    }

    // display the array
    cout << "New array created:" << endl;
    cout << "[ ";
    for (int i = 0; i < size; i++ ){
        cout << myArray[i] << " ";
    }
    cout << "]" << endl;

    // Deallocate memory
    delete[] myArray;

}

void pointer_to_pointer() {
    // Create a pointer pointing to another pointer. Demonstrate how you can access and modify the value to which the second pointer points.
    int a = 5;
    cout << "Original value of a: " << a << endl; // Original value of a

    int *ptrA = &a;        // Pointer to a
    int **ptrToPtrA = &ptrA; // Pointer to ptrA (pointer to a pointer)

    cout << "Value pointed to by ptrA: " << *ptrA << endl;        // Dereferencing ptrA gives the value of a
    cout << "Value pointed to by ptrToPtrA: " << **ptrToPtrA << endl; // Double dereferencing ptrToPtrA gives the value of a

    **ptrToPtrA = 42;     // Changing the value of a via ptrToPtrA

    cout << "New value of a: " << a << endl; // The value of a after modification
}

void basic_reference_usage(int& value) {
    // Basic Reference Usage:
    // Create a function that doubles the value of an integer passed by reference.

    cout << "Value: " << value << endl; // 10

    value *= 2;


}

void swap_with_references(int& a, int& b) {
    // Swap Function Using References:
    // Similar to the pointer exercise, but this time implement the swap function using references.

    int c = a;
    a = b;
    b = c;
}

int& function_returning_reference(int* array, int index) {
    // Function Returning a Reference:
    // Write a function that returns a reference to an array element given its index. Test the function by modifying the returned value.

    for(int i = 0; i < index; i++){
        array++;
    }
    cout << *array << endl;

    int &element = *array;
    element = 20;  // This should change the element at 'index' to 20

    return element;
}

int sum_with_references(const int (&array)[], int size) {
    // References with Arrays:
    // Create an array and write a function that returns the sum of its elements. The function should take the array as a reference.
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }

    return sum;
}

// void sort_array_with_references(int* array, int size) {
//     // Sorting an Array Using References:
//     // Write a function that sorts an array of integers. Pass the array to this function by reference.


// }

// void compare_reference_and_pointer() {
//     // Comparing References and Pointers:
//     // Write a program that demonstrates the difference between passing variables by pointer and by reference to a function. Use a simple operation like incrementing a value.
// }

// void overloaded_functions(int& value) {
//     // Function Overloading with Pointers and References:
//     // Overload a function so that it takes either a pointer or a reference, and then compare their behavior in a test program.
// }

// void overloaded_functions(int* value) {
//     // Function Overloading with Pointers and References (Overloaded version for pointer):
//     // Overload a function so that it takes either a pointer or a reference, and then compare their behavior in a test program.
// }

// // int* function_returning_pointer(int* array, int index) {
// //     // Returning Pointers and References:
// //     // Write two functions: one that returns a pointer and another that returns a reference. Compare how you would call and use these functions in a program.
// // }

// void modify_array_with_pointers_and_references(int* array, int size) {
//     // Mixing Arrays, Pointers, and References:
//     // Create a function that takes an array of integers. Use both pointers and references to modify the contents of the array.
// }
