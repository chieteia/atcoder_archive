#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i <= (b); ++i)
#define all(a) (a).begin(), (a).end()
#define def(A) A = (A > 0) ? A : -(A);
#define sum(A) accumulate(all(A), 0);
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

int ri() {
	int n;
	cin >> n;
	return n;
}


int main()
{
	string S; cin >> S;
	bool a = S[0] == 'R' ? 1 : 0;
	bool b = S[1] == 'R' ? 1 : 0;
	bool c = S[2] == 'R' ? 1 : 0;
	if (a && b && c ) cout << 3 << endl;
	else if ((a && b) || (b && c)) cout << 2 << endl;
	else if (a || b || c) cout << 1 << endl;
	else cout << 0 << endl;
	return (0);
}