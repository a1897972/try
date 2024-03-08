#include <iostream>

int sum_if_palindrome(int integers[], int length);

int main() {
    int palindrome_array[] = {1, 2, 3, 2, 1}; // Palindrome array
    int non_palindrome_array[] = {1, 2, 3, 4, 5}; // Non-palindrome array
    int empty_array[] = {}; // Empty array
    
    int palindrome_sum = sum_if_palindrome(palindrome_array, 5);
    std::cout << "Palindrome array sum: " << palindrome_sum << std::endl;
    
    int non_palindrome_sum = sum_if_palindrome(non_palindrome_array, 5);
    std::cout << "Non-palindrome array sum: " << non_palindrome_sum << std::endl;
    
    int empty_array_sum = sum_if_palindrome(empty_array, 0);
    std::cout << "Empty array sum: " << empty_array_sum << std::endl;
    
    return 0;
}
