#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	cin >> n;
	string number;
	cin >> number;
	int has_eight = 0;
	for (int i = 0; i < number.length(); i++)
		{ if (number[i] == '8') has_eight++;
	} if (n < 11 || has_eight == 0) 
		{ cout << 0 << endl;
		return 0;
	}
	if ((n / 11) >= has_eight)
		{ cout << has_eight << endl;
	} else if ((n / 11) < has_eight)
		{ cout << n / 11 << endl ;

} }
