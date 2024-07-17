#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // if len(w)>10 w=w[0] + len(w-2) + w[-1]
    int wrdCount;
    string wrd;
    cin >> wrdCount;
    for (int i=0;i<wrdCount;i++) {
        cin >> wrd;
        int l = wrd.length();
        if (l > 10) {
            cout << wrd[0] << l-2 << wrd[l-1] << "\n";
        } else
            cout << wrd << "\n";
    }
}
