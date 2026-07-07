#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1005];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true;

    while (left <= right) {
        int card;

        if (a[left] > a[right])
            card = a[left++];
        else
            card = a[right--];

        if (turn)
            sereja += card;
        else
            dima += card;

        turn = !turn;
    }

    cout << sereja << " " << dima;

    return 0;
}