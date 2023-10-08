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
    string msv, name, lop, mail, nganh;

    void nhap() {
        cin >> msv;
        scanf("\n");
        getline(cin, name);
        cin >> lop >> mail;

        nganh = msv.substr(3, 4);
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
        scanf("\n");
        getline(cin, s);
        string target;

        switch (s[0]) {
            case 'K':
                target = "DCKT";
                break;
            case 'C':
                target = "DCCN";
                break;
            case 'A':
                target = "DCAT";
                break;
            case 'V':
                target = "DCVT";
                break;
            case 'D':
                target = "DCDT";
                break;
        }

        for (auto &i:s) {
            if (i >= 'a' && i <= 'z') i -= 32;
        }
        
        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        for (int i = 0; i < n; i++) {
            if (ds[i].lop[0] == 'E' && (target == "DCCN" || target == "DCAT")) continue;
            if (ds[i].nganh == target) ds[i].xuat();
        }
    }
}