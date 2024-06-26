#include <iostream>
int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
    std::cout << "Enter elements of the first matrix:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            std::cin >> matrix1[i][j];
        }
    }
    std::cout << "Enter elements of the second matrix:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            std::cin >> matrix2[i][j];
        }
    }
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    std::cout << "Resultant matrix after addition:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
