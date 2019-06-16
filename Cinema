//В кинотеатре n рядов по m мест в каждом. В двумерном массиве хранится информация о проданных билетах. 
//Число 1 означает, что билет на данное место уже продан, число 0 означает, что место свободно. 
//Поступил запрос на продажу k билетов на соседние места в одном ряду. Определите, можно ли выполнить такой запрос.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    int x;
    cin >> n >> m;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++) {
        vector<int> u;
        for (int j = 0; j < m; j++) {
            cin >> x;
            u.push_back(x);
        }
        v.push_back(u);
    }
    int k;
    cin >> k;
    int free_seats = 0;
    int free_row = 0;
    bool row_found = false;
    for (int i = 0; i < n; i++) {
        free_seats = 0;
        for (int j = 0; j < m; j++) {
            if (v[i][j] == 0)
                free_seats++;
            if (v[i][j] == 1) {
                if (free_seats >= k && !row_found) {
                    free_row = i + 1;
                    row_found = true;
                }
                free_seats = 0;
            }
        }
        if (free_seats >= k && !row_found) {
            free_row = i + 1;
            row_found = true;
        }
    }
    cout << free_row;
}

