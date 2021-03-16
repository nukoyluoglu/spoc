#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n, x = 0, count = 0, boxes = 0;
	cin >> n;
	long long i = 1;
	long long j = 1;
	while (boxes + i + x <= n) 
		{ x += i;
		i += j;
		count++;
		boxes += x;
	}
	cout << count << endl ;

}
