#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // find min product of k in h
    // calculate startProduct heights[0-k]
    // nextProduct = heights[1-k+1]-height[0] (basically we caluclate and substract)
    int n;
    int k;
    cin >> n >> k;
    int heights[n];
    int h;
    int j = 0; 

    int sol=1;
    int smallestProduct=0;
    int currentProduct=0;
    int lastProduct=0;
    while(cin>>h) {
        heights[j] = h;
        if (j < k) {
            smallestProduct += h;
            lastProduct += h;
        } else {
            currentProduct = (lastProduct - heights[j-k]) + h;
            if (currentProduct < smallestProduct) {
                sol=j-1;
                smallestProduct = currentProduct;
            }
            lastProduct = currentProduct;
        }
        j += 1;
    }

    cout << sol;
}
