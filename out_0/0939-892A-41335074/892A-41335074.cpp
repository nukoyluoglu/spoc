#include <bits/stdc++.h>

using namespace std;

long long num[100010];
bool cmp(int a, int b) 
	{ return a > b;
}
int main() 
	{ long long sum = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
		{ int a;
		cin >> a;
		sum += a;
	}
	for (int i = 0; i < n; i++) { cin >> num[i]; }
	sort(num, num + n, cmp);
	if (num[0] + num[1] >= sum)
		{ cout << "YES" << endl;
	} else
		{ puts ( "NO" ) ;

} }
