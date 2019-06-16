//Дан двумерный массив и два числа i и j. Поменяйте в массиве столбцы с номерами i и j.
//Оформите решение в виде функции.

#include <iostream>
#include <vector>

using namespace std;

void swap_columns(vector<vector<int>>& matrix, size_t i, size_t j) {
    size_t n = matrix.size();
    for (size_t k = 0; k != n; ++k) {
        swap(matrix[k][i], matrix[k][j]);
    }
}
