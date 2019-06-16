//Дан двумерный массив размером n × m (n, m < 1000). 
//Симметричный ему относительно главной диагонали массив называется транспонированным к данному. 
//Он имеет размеры m × n: строки исходного массива становятся столбцами транспонированного, 
//столбцы исходного массива становятся строками транспонированного.
//Для данного массива постройте транспонированный массив.

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(const vector<vector<int>>& matrix) {
    size_t n = matrix.size();
    size_t m = matrix[0].size();
    vector<vector<int>> tr_mat(m, vector<int>(n, 0));
    for (size_t i = 0; i != m; ++i) {
        for (size_t j = 0; j != n; ++j) {
            tr_mat[i][j] = matrix[j][i];
        }
    }
    return tr_mat;
}
