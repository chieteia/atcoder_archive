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
	vector<int> a(n);
	vector<int> b(n);
	rep(i, n) a[i] = ri(), b[i] = ri();

	int ans = 1000000;
	rep(i, n) rep(j, n)
		ans = min(ans, i != j ? max(a[i], b[j]) : a[i] + b[j]);
	cout << ans;
}