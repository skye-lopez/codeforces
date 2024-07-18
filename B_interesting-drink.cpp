#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    //n=num of shops that sell his drink
    //0-n = price of bottle at each shop
    //q=days he plans to buy
    //n new lines of how much he plans to spend on a day
    
    // output is on every given day how many shops can he buy bottles from.

    int n;
    cin >> n;
    int shops[n];
    for(int i=0;i<n;i++) {
        cin>>shops[i];
    }
    sort(shops, shops + (sizeof(shops) / sizeof(shops[0])));

    int days;
    int s;
    cin >> days;
    for (int j=0;j<days;j++) {
        cin >> s;
        if (s < shops[0] || s > shops[n-1]) {
            cout << 0 << "\n"; continue;
        }

        int mid=n;
        while (mid < n || mid < 0) {
            if (shops[mid] == s) {
                cout << mid+1 << "\n"; break;
            } else if (s < shops[mid] && s > shops[mid-1]) {
                cout << mid << "\n"; break;
            } else if (s > shops[mid] && s < shops[mid+1]) {
                cout << mid+1 << "\n"; break;
            } else if (s > shops[mid]) {
                mid = n + (n/2);
            } else {
                mid = n / 2;
            }
        }
    }
}
