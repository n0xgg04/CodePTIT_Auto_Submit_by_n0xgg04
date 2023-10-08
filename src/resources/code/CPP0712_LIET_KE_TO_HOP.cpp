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
vi x;
void init() {
    cin >> n >> k;
    x.resize(k + 1);
}

void output() {
    for (int i = 1; i <= k; i++) cout << x[i];
    cout << " ";
}

void backtrack(int i) {
    for (int j = x[i - 1] + 1; j <= n - k + i; j++) {
        x[i] = j;
        if (i == k) output();
        else backtrack(i + 1);
    }
}

void run_test_case() {
    init();
    backtrack(1);
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}