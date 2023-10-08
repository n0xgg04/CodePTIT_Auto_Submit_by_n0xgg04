#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)

int n;
vll a;
void run_test_case() {
    cin >> n;
    a.resize(n);
    for (auto &i:a) {
        cin >> i;
        i *= i;
    }
    sort(all(a));
    int i = 0, j = n - 2, k = n - 1;
    while (1) {
        if (a[i] + a[j] == a[k]) {
            cout << "YES" << endl;
            return;
        }
        else if (a[i] + a[j] < a[k]) i++;
        else j--;

        if (i == j) {
            k--;
            j = k - 1;
            i = 0;
        }
        if (k == 1) break;
    }
    cout << "NO" << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}