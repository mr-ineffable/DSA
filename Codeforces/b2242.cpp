#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> pref1(n + 1, 0), pref2(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            pref1[i] = pref1[i - 1] + (a[i - 1] == 1 ? 1 : -1);
            pref2[i] = pref2[i - 1] + (a[i - 1] == 3 ? -1 : 1);
        }

        const int INF = 1e9;
        int minPref2 = INF;

        bool ok = false;

        // r = end of middle part (prefix length)
        // right part must be non-empty => r < n
        for (int r = 2; r < n; r++) {

            int l = r - 1;

            if (pref1[l] >= 0)
                minPref2 = min(minPref2, pref2[l]);

            if (minPref2 <= pref2[r]) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "Yes" : "No") << '\n';
    }
}