//Напишите функцию reverse, принимающую ссылку на std::vector<int> и переставляющую объекты массива в обратном порядке.

#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int>& numbers) {
    for (size_t i = 0; i < numbers.size() / 2; i++) {
        int tmp = numbers[i];
        numbers[i] = numbers[numbers.size() - i - 1];
        numbers[numbers.size() - i - 1] = tmp;
    }
}
