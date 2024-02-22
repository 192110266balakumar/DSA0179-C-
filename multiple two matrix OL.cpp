#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;
public:

    Matrix(const std::vector<std::vector<int>>& input_data) : data(input_data) {}

   
    Matrix operator*(const Matrix& other) const {
        int rows1 = data.size();
        int cols1 = data[0].size();
        int rows2 = other.data.size();
        int cols2 = other.data[0].size();

        if (cols1 != rows2) {
            std::cerr << "Cannot multiply matrices: Number of columns in the first matrix "
                         "does not match the number of rows in the second matrix." << std::endl;
            return Matrix({}); 
        }

        std::vector<std::vector<int>> result(rows1, std::vector<int>(cols2, 0));

        for (int i = 0; i < rows1; ++i) {
            for (int j = 0; j < cols2; ++j) {
                for (int k = 0; k < cols1; ++k) {
                    result[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return Matrix(result);
    }

  
    void display() const {
        for (const auto& row : data) {
            for (int elem : row) {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    
    Matrix matrix1({{1, 2},
                    {3, 4}});

    Matrix matrix2({{5, 6},
                    {7, 8}});


    Matrix result = matrix1 * matrix2;

   
    std::cout << "Result of matrix multiplication:" << std::endl;
    result.display();

    return 0;
}

