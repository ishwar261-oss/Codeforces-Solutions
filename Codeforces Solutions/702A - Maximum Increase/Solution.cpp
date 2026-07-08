#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxIncrease(vector<int> &nums) {
    int n = nums.size();
    int count = 1;
    int ans = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] > nums[i - 1]) count++;
        else count = 1;
        ans = max(ans, count);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    cin >> nums[i];

    cout << maxIncrease(nums);
    int ans = maxIncrease(nums);
    cout << ans;

    return 0;
}