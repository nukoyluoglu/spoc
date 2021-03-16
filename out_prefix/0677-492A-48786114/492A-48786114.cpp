#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int sum = 1;
	int levels = 1;
	int counter = 0;
	int n;
	cin >> n;
	for (int i = 2; sum <= n; i++) 
		{ counter++;
		levels = levels + i;
		sum = sum + levels;
	}
	cout << counter << endl ;

}
