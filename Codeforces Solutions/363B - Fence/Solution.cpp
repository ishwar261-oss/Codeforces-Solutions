#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> h(n);

    for (int i = 0; i < n; i++)
        cin >> h[i];

    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += h[i];

    int minSum = sum;
    int ans = 0;

    for (int i = k; i < n; i++) {

        sum += h[i];
        sum -= h[i - k];

        if (sum < minSum) {
            minSum = sum;
            ans = i - k + 1;
        }
    }

    cout << ans + 1;

    return 0;
}