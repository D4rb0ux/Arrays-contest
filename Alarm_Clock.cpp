//Будильник в сотовом телефоне можно настроить так, чтобы он звонил каждый день в одно и 
//то же время, либо в указанное время в определенный день недели. Независимо можно 
//настроить несколько будильников. По информации о будильниках и текущему времени и дню 
//недели определите, когда прозвонит очередной будильник.

#include <iostream>

using namespace std;

int main() {
    int cur_day, cur_hour, cur_min;
    cin >> cur_day >> cur_hour >> cur_min;
    int cur_time = cur_day * 24 * 60 + cur_hour * 60 + cur_min;
    int n;
    cin >> n;
    int day[n], hour[n], min[n];
    int time[n];
    for (int i = 0; i < n; i++) {
        cin >> day[i] >> hour[i] >> min[i];
        time[i] = day[i] * 24 * 60 + hour[i] * 60 + min[i];
    }
    int ans_day, ans_hour, ans_min;
    if (day[0] != 0)
        ans_day = day[0];
    else if (time[0] >= cur_time - (cur_day * 24 * 60))
        ans_day = cur_day;
    else
        ans_day = (cur_day + 1) % 7;

    ans_hour = hour[0];
    ans_min = min[0];
    int ans_time = ans_day * 60 * 24 + ans_hour * 60 + ans_min;
    for (int i = 1; i < n; i++) {
        if (day[i] == 0) {
            if (time[i] >= cur_time - (cur_day * 24 * 60)) {
                time[i] += cur_day * 24 * 60;
                day[i] = cur_day;
            } else {
                time[i] += ((cur_day + 1) % 7) * 24 * 60;
                day[i] = (cur_day + 1) % 7;
            }
        }
        if (ans_time > cur_time && time[i] >= cur_time) {
            if (time[i] < ans_time) {
                ans_time = time[i];
                ans_day = day[i];
                ans_hour = hour[i];
                ans_min = min[i];
            }
        }
        if (time[i] <= cur_time && ans_time < cur_time) {
            if (time[i] < ans_time) {
                ans_time = time[i];
                ans_day = day[i];
                ans_hour = hour[i];
                ans_min = min[i];
            }
        }
        if (time[i] >= cur_time && ans_time < cur_time) {
            ans_time = time[i];
            ans_day = day[i];
            ans_hour = hour[i];
            ans_min = min[i];
        }
    }
    cout << ans_day << " " << ans_hour << " " << ans_min << endl;
    return 0;
}

