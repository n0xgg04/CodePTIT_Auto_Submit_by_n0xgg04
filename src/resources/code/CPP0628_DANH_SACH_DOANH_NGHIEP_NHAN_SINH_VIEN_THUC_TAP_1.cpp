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

class DoanhNghiep {
public:
    string mdn, name;
    int num;

    void nhap() {
        cin >> mdn;
        scanf("\n");
        getline(cin, name);
        cin >> num;
    }

    void xuat() {
        cout << mdn << " " << name << " " << num << endl;
    }
};

bool cmp(DoanhNghiep a, DoanhNghiep b) {
    if (a.num == b.num) return a.mdn < b.mdn;
    return a.num > b.num;
}

void sapxep(DoanhNghiep a[], int n) {
    sort(a, a + n, cmp);
}

int main() {
    DoanhNghiep ds[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) ds[i].nhap();
    sapxep(ds, n);
    for (int i = 0; i < n; i++) ds[i].xuat();
}