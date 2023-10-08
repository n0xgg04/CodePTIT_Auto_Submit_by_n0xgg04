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

int check(int n) {
    string s = to_string(n);
    int odd = 0, even = 0;
    for (auto i:s) {
        int a = i - '0';
        if (a&1) odd++;
        else even++;
    }
    return odd == even;
}

int n;
void run_test_case() {
    cin >> n;
    int a = (int)pow(10, n - 1);
    int b = (int)pow(10, n);
    int cnt = 1;
    for (int i = a; i <= b; i++) {
        if (check(i)) {
            cout << i << " ";
            cnt++;
            if (cnt % 10 == 1) cout << endl;
        }
    }
}

int main() {
    faster();
    run_test_case();
}