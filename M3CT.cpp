#include <iostream>
#include <limits> // Needed for std::numeric_limits

using namespace std;

int main()
{
    // Declarations
    int number1, number2, number3;
    int *pointer1, *pointer2, *pointer3;

    // Prompt user to enter three whole numbers
    cout << "Please enter a whole number: ";
    cin >> number1;
    cout << "Please enter another whole number: ";
    cin >> number2;
    cout << "and please the final whole number: ";
    cin >> number3;

    // Dynamically allocate memory for an integer and assign its memory address to the pointers
    pointer1 = new int;
    pointer2 = new int;
    pointer3 = new int;

    // Check if memory allocation failed for any of the pointers.
    if (!pointer1 || !pointer2 || !pointer3) {
        cout << "Could not get enough memory. Program will stop." << endl;
        // If memory was allocated for a pointer, deallocate the memory for the corresponding pointer.
        if (pointer1) delete pointer1;
        if (pointer2) delete pointer2;
        if (pointer3) delete pointer3;
        return 1; // Indicate unsuccessful program termination.
    }

    // Dereference pointers and store the numbers at the memory addresses the pointers now hold.
    *pointer1 = number1;
    *pointer2 = number2;
    *pointer3 = number3;

    // Output the original numbers entered.
    cout << "\nOriginal numbers entered:" << endl;
    cout << "First number: " << number1 << endl;
    cout << "Second number: " << number2 << endl;
    cout << "Third number: " << number3 << endl;

    // Output the numbers stored in dynamic memory.
    cout << "\nNumbers stored in dynamic memory:" << endl;
    cout << "Number1 via pointer1: " << *pointer1 << endl;
    cout << "Number2 via pointer2: " << *pointer2 << endl;
    cout << "Number3 via pointer3: " << *pointer3 << endl;

    // Deallocate the memory pointed to by its corresponding pointer.
    delete pointer1;
    delete pointer2;
    delete pointer3;

    // Set pointers to nullptr to ensure they no longer point to valid memory.
    pointer1 = nullptr;
    pointer2 = nullptr;
    pointer3 = nullptr;

    // Program pause
    cout << "\nPress 'Enter' key to end program." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clears leftover input.
    cin.get();

    return 0; // Indicate successful program termination.
}