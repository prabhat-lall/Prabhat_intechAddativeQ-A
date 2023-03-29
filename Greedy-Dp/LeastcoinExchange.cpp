#include<bits/stdc++.h>

using namespace std;

vector<int> tender_change(vector<int>& coins, int change) {
    vector<int> C(change + 1, INT_MAX);
    C[0] = 0;
    for (int n = 1; n <= change; n++) {
        for (int d : coins) {
            if (d <= n) {
                C[n] = min(C[n], 1 + C[n - d]);
            }
        }
    }
    
    vector<int> result;
    for (auto it = coins.rbegin(); it != coins.rend(); it++) {
        int d = *it;
        while (change >= d && C[change] == 1 + C[change - d]) {
            result.push_back(d);
            change -= d;
        }
    }
    
    return result;
}

int main() {
    vector<int> coins = {1, 2, 5, 8, 10};
    int change = 16;
    vector<int> result = tender_change(coins, change);
    for (int d : result) {
        cout << d << " ";
    }
    cout << endl;
    return 0;
}