// DRAFT: I dont really get the test case yet
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int m;
    int l;
    cin >> n >> m;

    int ans[n];
    int in[n];
    map<int, int> seen;

    for (int i = 0; i < n; i++) {
        cin >> l;
        if (seen.find(l) == seen.end()) {
            seen[l] = 0;
        }
        in[i] = l;
    }

    int unique = 0;
    for (int x = n-1; x >= 0; x--) {
        int number = in[x];
        seen[number] = (seen[number] + 1);

        if (seen[number] == 1) {
            unique += 1;
        }

        ans[x] = unique;
    }


    for (int y = 0; y < n; y++) {
        cout << ans[y] << "\n";
    }
}
