/**
 * Problem: [Circular Barn]
 * Platform: USACO
 * Link: https://usaco.org/index.php?page=viewproblem2&cpid=616
 * Author: Andy Luna
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int bestAns = INT_MAX;
    vector<int> houses;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        houses.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int possibleans = 0;

        for (int j = 0; j < n; j++) {
            int target_house = (i + j) % n;
            possibleans += j * houses[target_house];
        }

        if (possibleans < bestAns) {
            bestAns = possibleans;
        }
    }
    cout << bestAns << "\n";
}

int main() {

    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
