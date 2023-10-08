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

class GiangVien {
public:
    string name, mgv, major;

    void nhap() {
        scanf("\n");
        getline(cin, name);
        getline(cin, major);

        mgv = to_string(idx++);
        mgv.insert(0, 2 - mgv.size(), '0');
        mgv = "GV" + mgv;
        
        for (auto &i:major) {
            if (i >= 'a' && i <= 'z') i -= 32;
        }
        stringstream ss(major);
        string token;
        string target;
        while (ss >> token) {

            target.pb(token[0]);
        }
        major = target;
    }

    void xuat() {
        cout << mgv << " " << name << " " << major << endl;
    }
};


int main() {
    int n;
    cin >> n;
    GiangVien ds[2000];
    for (int i = 0; i < n; i++) ds[i].nhap();

    int t;
    cin >> t;
    while (t--) {
        string major;
        scanf("\n");
        getline(cin, major);

        for (auto &i:major) {
            if (i >= 'a' && i <= 'z') i -= 32;
        }

        stringstream ss(major);
        string token;
        string target;
        while (ss >> token) {

            target.pb(token[0]);
        }
        major = target;
        cout << "DANH SACH GIANG VIEN BO MON " << major << ":\n";

        for (int i = 0; i < n; i++) {
            if (ds[i].major == major) ds[i].xuat();
        }
    }
}