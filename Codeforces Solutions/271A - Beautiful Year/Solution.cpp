#include <iostream>
using namespace std;

bool isBeautiful(int year) {

    int freq[10] = {0};

    while (year > 0) {
        int digit = year % 10;

        if (freq[digit]) return false;

        freq[digit] = 1;

        year /= 10;
    }
    return true;
}

int main() {

    int year;
    cin >> year;

    while (true) {
        year++;
        if (isBeautiful(year)) {
            cout << year;
            break;
        }
    }

    return 0;
}