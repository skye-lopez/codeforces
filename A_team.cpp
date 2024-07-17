#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x;
    int p;
    cin >> p;

    int sol = 0;

    for(int i=0;i<p;i++) {
        int sum = 0;
        for (int j=0; j<3;j++) {
            cin >> x;
            sum += x;
        }
        if (sum >= 2) {
            sol += 1;
        }
    }

    cout << sol;
}
