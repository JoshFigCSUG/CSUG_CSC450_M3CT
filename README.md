# CSUG_CSC450_M3CT
CSUG_CSC450_M3CT
# String Concatenation Console Application

This repository contains C++ source code for a console application that takes two string inputs from the user, concatenates them, and displays the result three times.

## Description

This repository demonstrates basic C++ programming concepts, including string manipulation, input/output operations, and basic error handling within a console application. The program prompts the user for two strings, combines them, and shows the concatenated output. This process is repeated to handle different string lengths as per the project requirements.

## Contents

* `.vscode/`: Contains configuration files for Visual Studio Code (may not be present in all clones).
* `M3CT`: (the executable file generated after compilation).
* `M3CT.cpp`: The C++ source code file containing the application logic.
    * Takes two string inputs from the user using `std::getline`.
    * Concatenates the two input strings using the `+` operator.
    * Prints the resulting concatenated string to the console using `std::cout`.
    * Repeats the input and concatenation process three times.
    * Includes basic error handling for input operations using a `try-catch` block and `cin.fail()`.
* `M3CT_PSEUDOCODE.txt`: A text file containing the pseudocode representation of the `M3CT.cpp` program's logic.

## Notes

* The program uses `std::getline` to ensure that entire lines of input, including spaces, are read correctly.
* Basic error handling is implemented to catch potential issues during input operations.
* The program iterates three times to fulfill the requirement of handling varying string lengths.

## Author

joshd

## Date

May 04, 2025
