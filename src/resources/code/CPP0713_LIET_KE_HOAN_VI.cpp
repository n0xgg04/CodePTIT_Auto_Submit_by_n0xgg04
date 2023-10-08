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

vi x;
int n, chuaxet[21];

void init() {
    cin >> n;
    x.resize(n);
    memset(chuaxet, 1, sizeof(chuaxet));
}

void output() {
    for (auto i:x) cout << i;
    cout << " ";
}

void backtrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (chuaxet[j]) {
            x[i] = j;
            chuaxet[j] = 0;
            if (i == n - 1) output();
            else backtrack(i + 1);
            chuaxet[j] = 1;
        }
    }
}

void run_test_case() {
    init();
    backtrack(0);
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}