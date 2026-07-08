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
    vector<int> nums = {1,2,3,4,1,2,3,1,2,1,9,7,5,6};
    int ans = maxIncrease(nums);
    cout << ans;

    return 0;
}