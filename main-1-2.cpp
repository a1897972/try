#include <iostream>

int is_identity(int array[10][10]);

int main() {
    int array[10][10] = {{1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                         {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
                         {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
                         {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
                         {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
                         {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
                         {0, 0, 0, 0, 0, 0, 0, 0, 0, 1}};
    
    int result = is_identity(array);
    
    if (result == 1) {
        std::cout << "The matrix is an identity matrix." << std::endl;
    } else {
        std::cout << "The matrix is not an identity matrix." << std::endl;
    }
    
    return 0;
}
