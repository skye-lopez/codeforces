#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // Its whoever got better than or equal too the person at k's score
    int n; cin >> n;
    int k; cin >> k;
    int sol=0;
    int scores[n];
    for (int i=0; i < n; i++) {
        cin >> scores[i];
    }
    for (int j=0; j < n; j++) {
        if (scores[j] <= 0) {
            continue;
        }
        if (scores[j] >= scores[k]) {
            sol += 1;
        }
    }

    cout << sol;
}
