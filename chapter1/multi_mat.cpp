#include <iostream>

void matrix_multiply(const int mat1[][2], const int mat2[][2], int mat3[][2])
{
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            mat3[i][j] = 0;
            for (int k = 0; k < 2; ++k)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    const int mat1[2][2] = { { 1, 2 }, { 3, 4 } };
    const int mat2[2][2] = { { 4, 3 }, { 2, 1 } };
    int mat3[2][2] = { { 0 },  };
    
    matrix_multiply(mat1, mat2, mat3);
    
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            std::cout << mat3[i][j] << " "; 
        }
        std::cout << '\n';
    }

    return 0;
}
