#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int notes = 0;

    notes += n / 100;
    n %= 100;

    notes += n / 20;
    n %= 20;

    notes += n / 10;
    n %= 10;

    notes += n / 5;
    n %= 5;

    notes += n;

    cout << notes;

    return 0;
}