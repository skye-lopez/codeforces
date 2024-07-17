#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int sum = 0;
    int opers;
    cin >> opers;

    for(int i=0; i < opers; i++) {
        string op;
        cin >> op;
        if (op.find("-") != std::string::npos) {
            sum -= 1;
        } else {
            sum += 1;
        }
    }

    cout << sum;
}
