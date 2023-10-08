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

int x, n, a[10000000];

bool cmp(int a, int b) {
    return (abs(x - a) < abs(x - b));
}

void run_test_case() {
    cin >> n >> x; 
    for (int i = 0; i < n; i++) cin >> a[i];
    stable_sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}