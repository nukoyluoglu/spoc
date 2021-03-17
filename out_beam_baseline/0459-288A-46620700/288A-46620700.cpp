#include <bits/stdc++.h>

using namespace std;

char ab[2] = {'a', 'b'};
int main() 
	{ int n, k;
	cin >> n >> k;
	if ((k == 1 && n != 1) || (k > n)) 
		{ cout << -1 << endl;
		return 0;
	}
	int frst = n - k + 2;
	bool flag = 0;
	int i = 0;
	for (; i < frst && i < n; i++) 
		{ cout << ab[flag];
		flag = (!flag & 1);
	}
	char c = 'c';
	for (; i < n; i++) 
		{ cout << c;
		c++;
	}
	cout << endl ;
	return 0;
}
