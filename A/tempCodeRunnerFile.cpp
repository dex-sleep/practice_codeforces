#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    cout << ((n / k) % 2 == 0 ? "NO" : "YES");
    return 0;
}