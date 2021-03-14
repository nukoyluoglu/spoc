#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, count = 0;
	cin >> n;
	int flag = 0, i = 2, x = 1;
	while (flag <= n) 
		{ flag += x;
		x += i;
		i++;
		if (flag <= n) count++;
	}
	cout << count ;

	return 0;
}
