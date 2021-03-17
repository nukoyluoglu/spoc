#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	int a[100];
	while (cin >> n) 
		{ int i = 2, sum = 0;
		int cs = 0;
		a[1] = 1;
		for (i = 2; sum < n; i++) 
			{ a[i] = i + a[i - 1];
			sum += a[i];
			cs = i - 1;
		}
		cout << cs << endl ;
	}
}
