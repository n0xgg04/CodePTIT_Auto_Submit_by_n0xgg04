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

int n, k, a[MAX*10];
void run_test_case() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];

    multiset<int> s;
    for (int i = 0; i < k; i++) {
        s.insert(a[i]);
    }
    cout << *s.rbegin() << " ";
    for (int i = 1; i < n - k + 1; i++) {
        s.erase(s.find(a[i-1]));
        s.insert(a[i + k - 1]);
        cout << *s.rbegin() << " ";
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}