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

int n, m, vs[30][30];
char a[30][30];
int row[] = {0, 0, 1, -1};
int col[] = {-1, 1, 0, 0};

void backtrack(int i, int j) {
    if (i < 0 || i == n || j < 0 || j == m) return;
    if (a[i][j] == 'X') return;
    if (vs[i][j]) return;
    vs[i][j] = 1;

    for (int k = 0; k < 4; k++) {
        backtrack(i + row[k], j + col[k]);
    }
}

void run_test_case() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    memset(vs, 0, sizeof(vs));

    for (int i = 0; i < n; i++) {
        if (a[i][0] == 'O') backtrack(i, 0);
        if (a[i][m-1] == 'O') backtrack(i, m-1);
    }

    for (int i = 0; i < m; i++) {
        if (a[0][i] == 'O') backtrack(0, i);
        if (a[n-1][i] == 'O') backtrack(n-1, i);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vs[i][j]) cout << 'O' << " ";
            else cout << 'X' << " ";
        }
        cout << endl;
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}