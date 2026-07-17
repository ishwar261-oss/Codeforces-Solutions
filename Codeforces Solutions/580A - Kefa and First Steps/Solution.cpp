#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int current = 1;
    int longest = 1;

    for (int i = 1; i < n; i++) {

        if (nums[i] >= nums[i - 1]) current++;
        else current = 1;

        longest = max(longest, current);
    }

    cout << longest;

    return 0;
}