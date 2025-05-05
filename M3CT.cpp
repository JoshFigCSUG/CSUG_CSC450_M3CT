/*
 * @file   M3CT.cpp
 * @brief  Program prompts for two strings, 
 *         concatenates them, 
 *         displays the result (repeated 3 times), 
 *         and has basic input error handling.
 * @author joshd
 * @date   May 04, 2025
 */

#include <iostream>
#include <string>   // Needed for string manipulation using the std::string class
#include <stdexcept> // Needed for exception handling, specifically runtime_error

using namespace std;

int main() {
    try { // Start of the try block to catch potential exceptions
        cout << "This program concatenates two user-inputted strings three times.\n"; // Inform the user about the program's purpose
        for (int i = 0; i < 3; ++i) { // Loop to repeat the string input and concatenation three times
            string string1;
            string string2;
            string result;

            cout << i+1 << "." << endl; // Display the current iteration
            cout << "Enter a string: ";
            getline(cin, string1);
            if (cin.fail()) { // Check if the input operation on cin failed
                throw runtime_error("Failed to read the first string."); // Throw an exception if reading the string failed
            }

            cout << "Enter another string: ";
            getline(cin, string2);
            if (cin.fail()) { 
                throw runtime_error("Failed to read the second string.");
            }

            result = string1 + string2;

            cout << "The concatenated string is: " << result << endl;

            if (i < 2) { // Check for last iteration
                cout << "\n--- Next pair of strings ---" << endl << endl; // Print a separator for the next input pair
            }
        }
    } catch (const runtime_error& error) { // Catch runtime_error exceptions that were thrown in the try block
        cerr << "\n\n\tError: " << error.what() << "\n\n"; // Print the error message to the standard error stream
        cout << "Program finished unsuccessfully.\n\n";
        return 1; // Indicate program ended with an error
    }

    cout << "\nProgram finished successfully. Press 'Enter' key to end...";
    cin.get(); // Program pause
    return 0; // Indicate that the program finished successfully
}