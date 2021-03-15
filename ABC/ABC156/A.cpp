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
	int n = ri();
	int r = ri();

	if (n >= 10) cout << r << endl;
	else cout << r + 100 * (10 - n) << endl;
}