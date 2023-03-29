#include<bits/stdc++.h>
using namespace std;

int removeOneDigit(int num) {
    string numStr = to_string(num);
    int largestNum = 0;

    for (int i = 0; i < numStr.length(); i++) {
        string newNumStr = numStr.substr(0, i) + numStr.substr(i + 1); // Remove the i-th digit from the string
        int newNum = stoi(newNumStr); // Convert the new string back to a number
        if (newNum > largestNum) {
            largestNum = newNum;
        }
    }

    return largestNum;
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<removeOneDigit(a[i]);
    }
    return 0;
}