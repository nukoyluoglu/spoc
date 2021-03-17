#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, p, halfs = 0;
	long long current = 0;
	cin >> n >> p;
	stack<string> s;
	string temp;
	for (int i = 0; i < n; i++) 
		{ cin >> temp;
		s.push(temp);
		if (temp == "halfplus") halfs++;
	}
	if (s.top() == "halfplus") 
		{ current = 1;
		s.pop();
	}
	while (!s.empty()) 
		{ current *= 2;
		if (s.top() == "halfplus") current++;
		s.pop();
	}
	current = current * p - (0.5 * p * halfs);
	cout << current << endl ;

	return 0;
}
