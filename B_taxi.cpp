// TODO: NOT SOLVED ANY WAY OVERCOMPLICATED

#include <bits/stdc++.h>
using namespace std;
//1 , 2, 3, 3, 4 
//1,2,3,3
//3
//

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int taxis = 0;
    int groups; 
    cin >> groups;

    map<int, int> avail;
    for(int i=0; i < groups; i++) {
        int j; cin >> j;
        if (avail.find(j) == avail.end()) {
            avail[j]=1;
        }else{
            avail[j] += 1;
        }
    }

    // 4s
    taxis += avail[4];
    // 3s
    int threePairs = avail[3] - avail[1];
    if (threePairs == 0) {
        taxis += avail[3]; avail[1] = 0;
    } else if (threePairs > 0) {
        int optimal = (avail[3] - threePairs);
        taxis += 1;
        taxis += (avail[3] - optimal);
        avail[1] -= optimal;
    }else {
        taxis += avail[3]; avail[1] -= avail[3];
    }
    // 2s 1st pass
    int twoPairs = floor(avail[2] / 2);
    taxis += twoPairs;
    avail[2] -= twoPairs;

    // 1s
    int onePairs = floor(avail[1]/4);
    taxis += onePairs;
    avail[1] -= onePairs*4;

    if (avail[1] >= 2 && avail[2] > 0) {
        taxis += 1; avail[1] -= 2; avail[2] -= 1;
    }
    if (avail[1] > 0) {
        taxis += 1;
    }

    // ANy unused 2s
    taxis += avail[2];

    cout << taxis;
}
