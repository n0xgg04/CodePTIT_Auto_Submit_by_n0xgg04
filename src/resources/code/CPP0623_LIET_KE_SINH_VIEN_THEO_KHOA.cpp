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

class SinhVien {
public:
    string msv, name, lop, mail, khoa;

    void nhap() {
        cin >> msv;
        scanf("\n");
        getline(cin, name);
        cin >> lop >> mail;

        khoa = lop.substr(1, 2);
    }

    void xuat() {
        cout << msv << " " << name << " " << lop << " " << mail << endl;
    }
};

int main() {
    int n;
    cin >> n;
    SinhVien ds[1000];
    for (int i = 0; i < n; i++) ds[i].nhap();

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN KHOA " << s << ":\n";
        for (int i = 0; i < n; i++) {
            if (ds[i].khoa == s.substr(2, 2)) ds[i].xuat();
        }
    }
}