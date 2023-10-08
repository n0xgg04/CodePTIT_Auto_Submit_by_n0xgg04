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

int n, m, a[105][105];
void run_test_case() {
    cin >> n >> m;
    
    int col[105] = {0}, row[105] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (col[j] || row[i]) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}