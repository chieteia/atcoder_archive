#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define fore(i,a) for(auto &i:a)
#define all(a) (a).begin(), (a).end()
#define def(A) A = (A > 0) ? A : -(A);
#define sum(A) accumulate(all(A), 0);
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1LL << 60;

inline int ri() {int n;cin >> n;return n;}
inline string rs() {string s;cin >> s;return s;}

int main()
{
	int n = ri();
	int d = ri();
	vector<vector<int>> x(n, vector<int>(d));
	rep(i, n) rep(j, d)
		x[i][j] = ri();

	int ans = 0;
	rep(i, n - 1){
		int diff = 0;
		rep2(j, i + 1, n){
			int square = 0;
			rep(k, d){
				diff = x[i][k] - x[j][k];
				square += diff * diff;
			}
			for (int n = 1; n * n <= square; n++){
				if (n * n == square){
					ans++;
					break;
				}
			}
		}
	}
	cout << ans << endl;
}