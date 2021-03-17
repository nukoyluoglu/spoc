#include <bits/stdc++.h>

using namespace std;

int main() 
	{ vector<int> v(6);
	for (int i = 0; i < 6; i++) cin >> v[i];
	int suma = 0;
	int minA = min(v[1], v[5]);
	int maxA = max(v[1], v[5]);
	int inicial = v[0] * 2 + 1;
	for (int i = 0; i < minA; i++) 
		{ suma += inicial;
		inicial += 2;
	}
	if (maxA != minA) inicial--;
	for (int i = minA; i < maxA; i++) { suma += inicial; }
	minA = min(v[2], v[4]);
	maxA = max(v[2], v[4]);
	inicial = v[3] * 2 + 1;
	for (int i = 0; i < minA; i++) 
		{ suma += inicial;
		inicial += 2;
	}
	if (maxA != minA) inicial--;
	if (v[1] == v[5]) 
		{ for (int i = minA; i < maxA; i++) { suma += inicial; }
	}
	cout << suma << endl ;

	return 0;
}
