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

int n, a;
void run_test_case() {
    cin >> n;
    int c = 0, d = 0, e = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 0) c++;
        else if (a == 1) d++;
        else e++;
    }
    while (c--) cout << 0 << " ";
    while (d--) cout << 1 << " ";
    while (e--) cout << 2 << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}