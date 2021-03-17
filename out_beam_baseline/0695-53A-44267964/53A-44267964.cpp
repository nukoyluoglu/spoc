#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string str;
	cin >> str;
	int len = str.length();
	int n;
	cin >> n;
	vector<string> vec;
	for (int i = 0; i < n; i++) 
		{ string temp;
		cin >> temp;
		int pos = temp.find(str);
		if (pos == 0) 
			{ string suffix = temp.substr(len);
			vec.push_back(suffix);
		}
	}
	if (vec.size() == 0) 
		{ cout << str << endl;
	}  else 
		{ sort(vec.begin(), vec.end());
		cout << str + vec [ 0 ] << endl ;
	}
	return 0;
}
