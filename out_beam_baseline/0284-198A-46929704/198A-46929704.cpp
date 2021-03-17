#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long int k, b, n, t;
	cin >> k >> b >> n >> t;
	long long int num = 1;
	long long int index = 0;
	while (num <= t) 
		{ num = k * num + b;
		index++;
	}
	index--;
	cout << max ( 0ll, n - index ) <<'\n';
}
