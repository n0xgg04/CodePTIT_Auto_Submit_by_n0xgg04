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

int n;
char a[100][100];
void run_test_case() {
    int row[100][100] = {};
    int col[100][100] = {};
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            
        }
    }

    if (a[0][0] == 'X') {
        row[0][0] = col[0][0] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 'O') {
                row[i][j] = col[i][j] = 0;
            }
            else {
                if (j == 0) row[i][j] = 1;
                else row[i][j] = row[i][j-1] + 1;

                if (i == 0) col[i][j] = 1;
                else col[i][j] = col[i-1][j] + 1;
            }
        }
    }


    int max = 0;
    for (int i = n-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            int s = min(row[i][j], col[i][j]);

            while (s > max) {
                if (col[i][j - s + 1] >= s && row[i - s + 1][j] >= s) {
                    max = s;
                }
                s--;
            }
        }
    }

    cout << max << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}