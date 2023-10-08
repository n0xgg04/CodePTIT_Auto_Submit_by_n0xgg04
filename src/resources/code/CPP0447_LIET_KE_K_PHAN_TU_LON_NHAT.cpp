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

int n, k;
int a[10000000];
void run_test_case() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);
    for (int i = 0; i < k; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}