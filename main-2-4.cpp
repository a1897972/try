#include <iostream>

int sum_min_max(int integers[], int length);

int main() {
    int array[] = {4, 2, 8, 1, 6}; // Example array
    
    int result = sum_min_max(array, 5);
    std::cout << "Sum of minimum and maximum elements: " << result << std::endl;
    
    return 0;
}
