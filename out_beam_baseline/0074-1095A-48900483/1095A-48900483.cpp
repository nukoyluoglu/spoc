#include <bits/stdc++.h>

using namespace std;

int main() 
	{ vector<char> v;
	vector<char> s;
	int count = 1, size;
	char c;
	cin >> size;
	for (int i = 0; i < size; i++) 
		{ cin >> c;
		v.push_back(c);
	}
	int in, i = 0;
	while (i < size) 
		{ if (i == 0) 
			{ s.push_back(v[i]);
			i++;
		}  else 
			{ in = count;
			for (int j = 0; j < in; j++) { i++; }
			if (i < size) s.push_back(v[i]);
			count++;
		}
	}
	for (int i = 0; i < s.size(); i++) { cout << s[i]; }
	cout << endl ;
	return 0;
}
