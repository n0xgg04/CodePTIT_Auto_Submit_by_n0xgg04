#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

struct Point {
	double x, y;
};

void input(struct Point &A) {
	cin >> A.x >> A.y;
}

double distance(struct Point &A, struct Point &B) {
	double x = A.x - B.x;
	double y = A.y - B.y;
	x *= x;
	y *= y;
	return sqrt(x + y);
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}


