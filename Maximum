//Напишите функцию max_element, которая принимает на вход матрицу и возвращает индексы (номера строки и столбца) 
//первого вхождения максимального элемента при рассмотрении элементов матрицы построчно.

#include <iostream>
#include <vector>

using namespace std;

pair<size_t, size_t> max_element(const vector<vector<int>>& matrix) {
    int max_elem = matrix[0][0];
    size_t n = matrix.size();
    size_t m = matrix[0].size();
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            if (matrix[i][j] > max_elem)
                max_elem = matrix[i][j];
        }
    }
    pair<size_t, size_t> max_index = {0, 0};
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            if (matrix[i][j] == max_elem) {
                max_index.first = i;
                max_index.second = j;
                return max_index;
            }
        }
    }
}
