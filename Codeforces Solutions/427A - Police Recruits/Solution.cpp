#include <iostream>
    using namespace std;
int main() {
    int n;
    cin >> n;
    int police = 0;
    int crimes = 0;

    while (n--) {
        int x;
        cin >> x;
        if (x > 0)  police += x;
        else {
            if (police > 0) police--;
            else crimes++;
        }
    }
    cout << crimes;
    return 0;
}   