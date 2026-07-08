#include <iostream>
#include <vector>
using namespace std;

vector<int> borze(string s) {
    vector<int> ans;
    int i = 0;

    while (i < s.length()) {
        if (s[i] == '.') {
            ans.push_back(0);
            i++;
        }else if (s[i] == '-' && s[i + 1] == '.') {
            ans.push_back(1);
            i += 2;
        }else{
            ans.push_back(2);
            i += 2;
        }
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    vector<int> ans = borze(s);
    for (int x : ans) cout << x;
    return 0;
}