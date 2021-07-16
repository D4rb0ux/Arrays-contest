//По данной перестановке требуется найти обратную к ней.

#include <iostream>

using namespace std;

int main() {
    size_t n, val;
    cin >> n;
    size_t a[n];
    for (size_t i = 0; i < n; i++) {
        cin >> val;
        a[val - 1] = i + 1;
    }
    for (size_t i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
