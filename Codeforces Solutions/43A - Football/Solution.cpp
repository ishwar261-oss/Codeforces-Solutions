#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string firstTeam, team;
    cin >> firstTeam;

    int firstCount = 1;
    string secondTeam = "";
    int secondCount = 0;

    for (int i = 1; i < n; i++) {
        cin >> team;

        if (team == firstTeam)
            firstCount++;
        else {
            secondTeam = team;
            secondCount++;
        }
    }

    if (firstCount > secondCount)
        cout << firstTeam;
    else
        cout << secondTeam;

    return 0;
}