#include <bits/stdc++.h>
using namespace std;

//main function
int main() {

    int n, x;
    cin >> n >> x;

    long int i_left = x, count = 0;
    for (int i = 1; i <= n; i++) {
        char c;
        int d;
        cin >> c >> d;
        if (c == '+')i_left += d;
        else if (c == '-' && i_left >= d)i_left -= d;
        else if (c == '-' && i_left < d) count++;
    }
    cout << i_left << " " << count << endl;

    return 0;
}