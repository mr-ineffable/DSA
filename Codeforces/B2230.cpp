#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        string s;
        cin >> s;

        int cnt2 = 0;
        int cnt4 = 0;

        for (char c : s) {
            if (c == '2') cnt2++;
            if (c == '4') cnt4++;
        }

        // Remove all 2s
        int ans = cnt2;

        int before13 = 0;

        for (char c : s) {
            if (c == '1' || c == '3') {
                before13++;
            }
            else if (c == '2') {
                // Keep this 2:
                // remove all 1/3 before it
                // remove every other 2
                ans = min(ans, before13 + cnt2 - 1);
            }
        }

        cout << cnt4 + ans << '\n';
    }
}