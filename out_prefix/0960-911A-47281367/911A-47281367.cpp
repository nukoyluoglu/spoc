#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int size, in[100005];
	vector<int> d1;
	cin >> size;
	for (int i = 0; i < size; i++) { cin >> in[i]; }
	int mn = 1e9;
	for (int i = 0; i < size; i++) 
		{ if (in[i] < mn) { mn = in[i]; }
	}
	for (int i = 0; i < size; i++) 
		{ if (mn == in[i]) { d1.push_back(i); }
	}
	int mns = 1e9;
	for (int i = 0; i < d1.size() - 1; i++) 
		{ if (abs(d1[i] - d1[i + 1]) < mns) { mns = abs(d1[i] - d1[i + 1]); }
	}
	cout << mns << endl ;

	return 0;
}
