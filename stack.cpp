//Kaleigha Hayes
//1313037

#include "stack.h"

// Function implementation to split a decimal number into integer and decimal parts
pair<int, double> splitDecimal(double num) {
    int integerPart = static_cast<int>(num); // Extract the integer part of the decimal number
    double decimalPart = num - integerPart;  // Extract the decimal part of the decimal number
    return make_pair(integerPart, decimalPart); // Return the pair of integer and decimal parts
}

// Function implementation to convert an integer to binary using a stack
string intToBinary(int num) {
    stack<int> binaryStack; // Create a stack to store binary digits
    string binaryStr; // Initialize an empty string to store the binary representation

    // Convert the integer to binary by repeatedly dividing by 2 and storing remainders in the stack
    while (num > 0) {
        binaryStack.push(num % 2); // Push the remainder (binary digit) onto the stack
        num /= 2; // Divide the number by 2 to get the next binary digit
    }

    // Pop each binary digit from the stack and append it to the binary string
    while (!binaryStack.empty()) {
        binaryStr += to_string(binaryStack.top()); // Convert the digit to string and append to binary string
        binaryStack.pop(); // Remove the digit from the stack
    }

    return binaryStr; // Return the binary representation as a string
}
