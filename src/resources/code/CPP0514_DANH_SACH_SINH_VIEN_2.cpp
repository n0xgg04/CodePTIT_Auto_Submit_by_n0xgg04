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

struct SinhVien {
    string msv, name, lop, dob;
    float gpa;

    void standardName() {
        for (auto &i:name) {
            if (i >= 'A' && i <= 'Z') i += 32;
        }
        stringstream ss(name);
        string token, final;
        while (ss >> token) {
            token[0] -= 32;
            final += token + " ";
        }
        name = final;
    }

    void input(int n) {
        cin.ignore();
        getline(cin, name);
        cin >> lop >> dob >> gpa;
        standardName();
        msv = to_string(n);
        msv.insert(0, 3 - msv.size(), '0');
        msv = "B20DCCN" + msv;

        if (dob[1] == '/') dob.insert(0, "0");
        if (dob[4] == '/') dob.insert(3, "0");
    }

    void output() {
        cout << msv << " " << name << lop << " " << dob << " ";
        cout << fixed << setprecision(2);
        cout << gpa << endl;
    }
};

void nhap(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i].input(i+1);
    }
}

void in(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i].output();
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}