#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double result, inner_sum;
    int n, k;

    // 1 Спосіб
    result = 0;
    k = 1;
    while (k <= 20) {
        inner_sum = 0;
        n = 1;
        while (n <= k) {
            inner_sum += cos(n + k);
            n++;
        }
        result += sqrt(sin(k) * sin(k) + fabs(inner_sum));
        k++;
    }
    cout << result << endl;

    // 2 Спосіб
    result = 0;
    k = 1;
    do {
        inner_sum = 0;
        n = 1;
        do {
            inner_sum += cos(n + k);
            n++;
        } while (n <= k);
        result += sqrt(sin(k) * sin(k) + fabs(inner_sum));
        k++;
    } while (k <= 20);
    cout << result << endl;

    // 3 Спосіб
    result = 0;
    for (k = 1; k <= 20; k++) {
        inner_sum = 0;
        for (n = 1; n <= k; n++) {
            inner_sum += cos(n + k);
        }
        result += sqrt(sin(k) * sin(k) + fabs(inner_sum));
    }
    cout << result << endl;

    // 4 Спосіб
    result = 0;
    for (k = 20; k >= 1; k--) {
        inner_sum = 0;
        for (n = k; n >= 1; n--) {
            inner_sum += cos(n + k);
        }
        result += sqrt(sin(k) * sin(k) + fabs(inner_sum));
    }
    cout << result << endl;

    return 0;
}
