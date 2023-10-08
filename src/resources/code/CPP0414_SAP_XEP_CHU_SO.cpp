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

ll n, a;
void run_test_case() {
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a;
        while (a) {
            mp[a % 10] = 1;
            a /= 10;
        }
    }
    for (auto i:mp) cout << i.first << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}