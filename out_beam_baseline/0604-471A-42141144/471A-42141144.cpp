#include <bits/stdc++.h>

using namespace std;

int main() 
	{ vector<int> v(6);
	cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4] >> v[5];
	sort(v.begin(), v.end());
	int h, b;
	if (v[0] == v[3]) 
		{ h = 4;
		b = 5;
	}  else if (v[1] == v[4]) 
		{ h = 0;
		b = 5;
	}  else if (v[2] == v[5]) 
		{ h = 0;
		b = 1;
	}  else 
		{ cout << "Alien\n";
		return 0;
	}
	cout << ( ( v [ h ] < v [ b ] )? "Bear\n" : "Elephant\n'
	return 0;
}
