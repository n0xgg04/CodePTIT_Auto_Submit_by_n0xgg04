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
#define MAX 1000000

bool cmp(string a, string b) {
    if (a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

int n;
vector<string> a;
void run_test_case() {
    cin >> n;
    a.resize(n);
    for (auto &i:a) cin >> i;

    sort(all(a), cmp);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] == a[j]) {
                ans += 2;
                continue;
            }
            if (a[j].find(a[i]) != -1) ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    faster();
        run_test_case();
}