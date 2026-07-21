#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);

    int ones = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] == 1) {
            ones++;
            a[i] = -1;
        }
        else {
            a[i] = 1;
        }
    }

    int curr = a[0];
    int best = a[0];

    for (int i = 1; i < n; i++) {
        curr = max(a[i], curr + a[i]);
        best = max(best, curr);
    }

    cout << ones + best;

    return 0;
}