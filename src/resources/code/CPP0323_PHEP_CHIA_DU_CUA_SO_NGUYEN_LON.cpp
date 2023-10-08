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

ll chiadu(string a, ll b) {
    ll ans = 0;
    for (int i = 0; i < a.size(); i++) {
        ans = (ans * 10 + a[i] - '0') % b;
    }
    return ans;
}

string a;
ll b;
void run_test_case() {
    cin >> a >> b;
    cout << chiadu(a, b) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}