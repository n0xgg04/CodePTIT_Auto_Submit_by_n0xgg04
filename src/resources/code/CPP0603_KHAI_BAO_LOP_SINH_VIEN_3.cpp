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
    friend istream &operator>>(istream &input, SinhVien &a) {
        getline(input, a.name);
        cin >> a.lop >> a.dob >> a.gpa;

        a.msv = "B20DCCN001";
        if (a.dob[1] == '/') a.dob.insert(0, "0");
        if (a.dob[4] == '/') a.dob.insert(3, "0");

        stringstream ss(a.name);
        string token;
        string s;
        while (ss >> token) {
            for (auto &i:token) {
                if (i >= 'A' && i <= 'Z') i += 32;
            }
            token[0] -= 32;
            s += token + " ";
        }
        s = s.substr(0, s.length() - 1);
        a.name = s;
        return input;
    }

    friend ostream &operator<<(ostream &output, SinhVien a) {
        output << a.msv << " " << a.name << " " << a.lop << " " << a.dob << " ";
        output << fixed << setprecision(2);
        output << a.gpa << endl;

        return output;
    }
public:
    string msv, name, dob, lop;
    float gpa;
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}