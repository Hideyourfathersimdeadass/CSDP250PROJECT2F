//Kaleigha Hayes 
//CSDP250 Project 2
//README.TXT

 Decimal to Binary Converter

This program converts a decimal number into its binary representation using stack and queue data structures.

 Description

The program consists of several files:

- main.cpp: Contains the main function that orchestrates the program's execution.
- stack.h: Header file containing the function declaration for converting an integer to binary using a stack.
- stack.cpp: Source file containing the implementation of the function for converting an integer to binary using a stack.
- queue.h: Header file containing the function declaration for converting a decimal fraction to binary using a queue.
- queue.cpp: Source file containing the implementation of the function for converting a decimal fraction to binary using a queue.

 Functions Used

 splitDecimal
- Description: Splits a decimal number into its integer and decimal parts.
- File: stack.h or queue.h
- Parameters: 
  - num: The decimal number to be split.
- Return Value: A pair containing the integer and decimal parts of the input number.

intToBinary
- Description: Converts an integer to its binary representation using a stack.
- File: stack.h and stack.cpp
- Parameters: 
  - num: The integer to be converted to binary.
- Return Value: A string representing the binary representation of the input integer.

decimalToBinary
- Description: Converts a decimal fraction to its binary representation using a queue.
- File: queue.h and queue.cpp
- Parameters: 
  - num: The decimal fraction to be converted to binary.
- Return Value: A string representing the binary representation of the input decimal fraction.

Usage

1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. Enter a decimal number when prompted.
4. The program will output the binary representation of the entered decimal number.



