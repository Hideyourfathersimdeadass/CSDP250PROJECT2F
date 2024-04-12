//Kaleigha Hayes
//1313037

#include <iostream>
#include "stack.h"
#include "queue.h"

using namespace std;

int main() {
    double decimalNum;
    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    pair<int, double> parts = splitDecimal(decimalNum); // Split the decimal number into integer and decimal parts
    int integerPart = parts.first; // Extract the integer part
    double decimalPart = parts.second; // Extract the decimal part

    string binaryInteger = intToBinary(integerPart); // Convert the integer part to binary using a stack
    string binaryDecimal = decimalToBinary(decimalPart); // Convert the decimal part to binary using a queue

    cout << "Binary representation: " << binaryInteger << "." << binaryDecimal << endl; // Output the binary representation

    return 0;
}

