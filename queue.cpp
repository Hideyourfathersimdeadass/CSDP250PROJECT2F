//Kaleigha Hayes
//1313037

#include "queue.h"

// Function implementation to convert a decimal fraction to binary using a queue
string decimalToBinary(double num) {
    queue<int> binaryQueue; // Create a queue to store binary digits
    string binaryStr; // Initialize an empty string to store the binary representation

    const int maxIterations = 32; // Maximum number of bits for decimal part
    int iterCount = 0;

    // Convert the decimal fraction to binary by repeatedly multiplying by 2 and storing integer parts in the queue
    while (num > 0 && iterCount < maxIterations) {
        num *= 2; // Multiply the number by 2 to shift the decimal point
        int bit = static_cast<int>(num); // Get the integer part (binary digit)
        binaryQueue.push(bit); // Push the binary digit onto the queue
        num -= bit; // Remove the integer part from the number
        iterCount++; // Increment the iteration count
    }

    // Dequeue each binary digit from the queue and append it to the binary string
    while (!binaryQueue.empty()) {
        binaryStr += to_string(binaryQueue.front()); // Convert the digit to string and append to binary string
        binaryQueue.pop(); // Remove the digit from the queue
    }

    return binaryStr; // Return the binary representation as a string
}
