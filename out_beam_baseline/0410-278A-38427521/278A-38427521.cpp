#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int n;
	cin >> n;
	long long int Arr[n + 2], Sum = 0;
	for (int i = 1; i <= n; i++) cin >> Arr[i], Sum += Arr[i];
	long long int s, t;
	cin >> s >> t;
	long long int Cnt = 0;
	if (s > t) swap(s, t);
	for (int i = s; i < t; i++) Cnt += Arr[i];
	cout << min ( Cnt, Sum - Cnt ) << endl ;
	return 0;
}
