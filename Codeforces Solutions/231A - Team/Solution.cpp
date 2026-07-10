#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2) ans+=1;
    }
    cout << ans;
    return 0;
}