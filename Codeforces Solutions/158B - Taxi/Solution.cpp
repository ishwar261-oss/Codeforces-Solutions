#include <iostream>
    using namespace std;

int main() {

    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 1) cnt1++;
        else if (x == 2) cnt2++;
        else if (x == 3) cnt3++;
        else cnt4++;
    }

    int taxi = cnt4;

    taxi += cnt3;
    cnt1 = max(0, cnt1 - cnt3);

    taxi += cnt2 / 2;

    if (cnt2 % 2) {
        taxi++;
        cnt1 = max(0, cnt1 - 2);
    }

    taxi += (cnt1 + 3) / 4;

    cout << taxi;

    return 0;
}