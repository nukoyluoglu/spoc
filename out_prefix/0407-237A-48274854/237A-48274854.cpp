#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, ele1, ele2;
	cin >> n;
	int arr[24 * 60] = {};
	while (n--) 
		{ cin >> ele1 >> ele2;
		arr[ele1 * 60 + ele2]++;
	}
	int max = 0;
	for (int i = 0; i < 24 * 60; i++) 
		{ if (arr[i] > max) { max = arr[i]; }
	}
	cout << max << endl ;

}
