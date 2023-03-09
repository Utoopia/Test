#include <iostream>
#include <vector>
using namespace std;

int count_sequences(int n) {
    vector<int> dp(n + 1);
    dp[0] = 1; // 길이가 0인 수열은 1개로 초기화

    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1] + (i >= 2 ? dp[i - 2] : 0);
    }

    return dp[n];
}

int main() {
    int n;
    cout << "Enter the length of the sequence: ";
    cin >> n;

    int count = count_sequences(n);

    cout << "The total number of sequences is: " << count << endl;

    return 0;
}