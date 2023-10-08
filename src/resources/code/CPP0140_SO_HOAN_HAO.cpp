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

ll ans[] = {6,28, 496, 8128, 33550336, 8589869056, 137438691328};
void run_test_case() {
    ll n;
    cin >> n;
    for (int i = 0; i < 7; i++) {
        if (n == ans[i]) {
            cout << 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}