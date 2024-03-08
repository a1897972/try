#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int binary_digits[] = {1, 0, 1, 1, 0, 1}; // Example binary number: 101101
    int number_of_digits = 6; // Number of digits in the array
    
    int result = binary_to_int(binary_digits, number_of_digits);
    std::cout << "Binary to integer result: " << result << std::endl;
    
    return 0;
}
