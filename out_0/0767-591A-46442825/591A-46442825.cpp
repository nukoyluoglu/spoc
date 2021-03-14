#include <bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int mod1 = 1e9 + 7;
const long long mod = 1e16;
const int maxn = 1000;
int dx[5] = {0, 1, 0, -1, 0}, dy[5] = {1, 0, -1, 0, 0};
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int main() 
	{ double n, x, y;
	cin >> n >> x >> y;
	double d = n / (x + y);
	double e = d * x;
	cout << e ;

	return 0;
}
