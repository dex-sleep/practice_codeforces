#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        for (int i = 0; i < n; ++i) {
            cout << char('a' + i % b);
        }
        cout << endl;
    }
    return 0;
}