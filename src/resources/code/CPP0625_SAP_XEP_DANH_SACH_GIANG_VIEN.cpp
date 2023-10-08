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

bool cmp(GiangVien a, GiangVien b) {
    stringstream ss1(a.name);
    string token;
    string name1, name2;

    while (ss1 >> token) {
        name1 = token;
    }

    stringstream ss2(b.name);
    while (ss2 >> token) {
        name2 = token;
    }

    if (name1 == name2) return a.mgv < b.mgv;
    return name1 < name2;
}

void sapxep(GiangVien a[], int n) {
    sort(a, a + n, cmp);
}

int main() {
    int n;
    cin >> n;
    GiangVien ds[2000];
    for (int i = 0; i < n; i++) ds[i].nhap();
    sapxep(ds, n);
    for (int i = 0; i < n; i++) ds[i].xuat();
    return 0;
}