#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long summingSeries(int n) {
    return (n * (long long)(n + 1) * (2 * n + 1) / 6) % MOD;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n; 
        long long result = summingSeries(n);
        cout << result << endl;
    }
    return 0;
}
