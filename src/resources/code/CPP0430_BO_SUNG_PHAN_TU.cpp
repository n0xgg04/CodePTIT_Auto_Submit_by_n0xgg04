#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, a[100000];
void run_test_case() {
    cin >> n;
    int b[100000] = {0}, cnt = 0, r = 0, l = 100000;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        r = max(r, a[i]);
        l = min(l, a[i]);
        b[a[i]]++;
    }
    for (int i = l; i < r; i++) {
        if (b[i] == 0) cnt++;
    }
    cout << cnt << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}