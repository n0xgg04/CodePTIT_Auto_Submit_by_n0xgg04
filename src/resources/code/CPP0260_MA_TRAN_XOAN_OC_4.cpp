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
int main() {
    cin >> n;
    vi tmp;
    int b;
    for (int i = 0; i < n*n; i++) {
        cin >> b;
        tmp.pb(b);
    }

    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;

    sort(all(tmp));
    int k = 0;
    while (h1 <= h2 && c1 <= c2 && k < n*n) {
        for (int i = c1; i <= c2; i++) {
            a[h1][i] = tmp[k++];
        }
        h1++;
        for (int i = h1; i <= h2; i++) {
            a[i][c2] = tmp[k++];
        }
        c2--;
        if (c1 <= c2) {
            for (int i = c2; i >= c1; i--) {
                a[h2][i] = tmp[k++];
            }
            h2--;
        }
        if (h1 <= h2) {
            for (int i = h2; i >= h1; i--) {
                a[i][c1] = tmp[k++];
            }
            c1++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}