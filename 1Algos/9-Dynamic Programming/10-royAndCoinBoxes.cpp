#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<int> diff(n + 2, 0);

    // Difference Array
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }

    // Prefix Sum -> Coins in each box
    vector<int> coins(n + 1, 0);
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        coins[i] = coins[i - 1] + diff[i];
        mx = max(mx, coins[i]);
    }

    // freq[x] = boxes having exactly x coins
    vector<int> freq(mx + 2, 0);

    for (int i = 1; i <= n; i++) {
        freq[coins[i]]++;
    }

    // Suffix Sum
    // freq[x] = boxes having at least x coins
    for (int i = mx; i >= 1; i--) {
        freq[i] += freq[i + 1];
    }

    int q;
    cin >> q;

    while (q--) {
        int k;
        cin >> k;

        if (k > mx)
            cout << 0 << '\n';
        else
            cout << freq[k] << '\n';
    }

    return 0;
}