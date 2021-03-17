#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int k;
	cin >> k;
	string str;
	cin >> str;
	int n = str.length();
	map<char, int> characters;
	map<char, int>::iterator itr;
	for (int i = 0; i < n; i++) 
		{ if (characters.find(str[i]) != characters.end()) 
			{ characters[str[i]] += 1;
		}  else 
			{ characters[str[i]] = 1;
		}
	}
	for (itr = characters.begin(); itr != characters.end(); itr++) 
		{ if (itr->second < k) 
			{ cout << -1 << endl;
			exit(0);
		}
	}
	string new_str = "";
	for (itr = characters.begin(); itr != characters.end(); itr++) 
		{ int repeat = itr->second / k;
		for (int i = 0; i < repeat; i++) { new_str = new_str + itr->first; }
	}
	if (new_str.length() * k < n) 
		{ cout << -1 << endl;
		exit(0);
	}
	for (int i = 0; i < k; i++) { cout << new_str; }
	cout << endl ;

	return 0;
}
