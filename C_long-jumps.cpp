#include <bits/stdc++.h>
using namespace std;

int score(int i, int s, int *n) {
    int res = 0;
    while (i < s) {
        res += n[i];
        i += n[i];
    }
    return res;
}

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxScore = 0;
    for (int j = 0; j < n; j++) {
        int s = score(j, n, a);
        if (s > maxScore) {
            maxScore = s;
        }
    }

    cout << maxScore << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        solve();
    }
}
