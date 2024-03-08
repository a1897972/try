#include <iostream>

void count_digits(int array[4][4]) {
    int counts[10] = {0}; // Initialize counts for digits 0-9
    
    // Count occurrences of each digit
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            counts[array[i][j]]++;
        }
    }
    
    // Print the counts
    for (int digit = 0; digit < 10; digit++) {
        std::cout << digit << ":" << counts[digit] << ";";
    }
    std::cout << std::endl;
}
