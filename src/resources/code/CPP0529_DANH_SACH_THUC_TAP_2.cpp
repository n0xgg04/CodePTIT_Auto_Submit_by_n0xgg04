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

int idx = 1;

struct SinhVien {
    string name, msv, lop, mail, company;
    int id;

    void nhap() {
        cin >> msv;
        scanf("\n");
        getline(cin, name);
        cin >> lop >> mail >> company;
        id = idx++;
    }

    void xuat() {
        cout << id << " " << msv << " " << name << " " << lop << " " << mail << " " << company << endl;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    return a.msv < b.msv;
}

void sapxep(SinhVien a[], int n) {
    sort(a, a + n, cmp);
}

int main() {
    SinhVien a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        a[i].nhap();
    }
    int t;
    cin >> t;
    while (t--) {
        SinhVien ans[1000];
        string comp;
        int k = 0;
        cin >> comp;
        for (int i = 0; i < n; i++) {
            if (a[i].company == comp) ans[k++] = a[i];
        }
        sort(ans, ans + k, cmp);
        for (int i = 0; i < k; i++) ans[i].xuat();
    }
}