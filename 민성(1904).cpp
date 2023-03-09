#include <iostream>
#include <vector>
using namespace std;

unsigned long long count_sequences(int N) {
    vector<unsigned long long> dp(N + 1);
    dp[0] = 1; 

    for (int i = 1; i <= N; i++) {
        dp[i] = dp[i - 1] % 15746 + (i >= 2 ? dp[i - 2] % 15746 : 0);
    }

    return dp[N];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    unsigned long long count = count_sequences(N);

    cout << count % 15746 << endl;

    return 0;
}