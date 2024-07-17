#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Danger=n repeating atleast 7 times
    // -> YES/NO input=1 str

    string input;
    cin >> input;
    string ans = "NO";

    int j = 1;
    int s = 1;
    while (j < input.length()) {
        if (input[j] != input[j-1]) {
            s = 1; 
        } else {
            s += 1;
            if (s>=7) {
                ans = "YES";
                break;
            }
        }
        j += 1;
    }
    cout << ans;
}
