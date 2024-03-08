#include <iostream>
#include <string>
#include <bitset>

void print_binary_str(std::string decimal_number) {
    // Convert the decimal number string to integer
    int decimal = std::stoi(decimal_number);
    
    // Convert the integer to binary and print it
    std::cout << std::bitset<32>(decimal).to_string().substr(32 - decimal_number.size()) << std::endl;
}
