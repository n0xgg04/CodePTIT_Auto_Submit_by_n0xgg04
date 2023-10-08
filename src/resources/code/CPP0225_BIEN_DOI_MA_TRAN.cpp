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

int n, a[1000][1000];
void run_test_case() {
    cin >> n;
    int hang[n] = {}, cot[n] = {}, tong = 0, curr = 0;
    int maxHang = 0, maxCot = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        curr = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            cot[j] += a[i][j];
            tong += a[i][j];
            curr += a[i][j];
        }
        hang[i] += curr;
    }

    for (int i = 0; i < n; i++) maxHang = max(maxHang, hang[i]);
    for (int i = 0; i < n; i++) maxCot = max(maxCot, cot[i]);
    
    ans = max(maxHang, maxCot) * n - tong;
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}
