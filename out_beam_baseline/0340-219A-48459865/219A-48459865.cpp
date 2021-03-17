#include <bits/stdc++.h>

using namespace std;

int main() 
	{ vector<int> v;
	vector<int> v1;
	vector<char> v2;
	int k, c = 0, temp, gh = 0;
	cin >> k;
	char ch;
	string s, ans;
	cin >> s;
	string s1 = s;
	sort(s1.begin(), s1.end());
	for (int i = 0; i < s1.size(); i++) 
		{ c = 0;
		if (s1[i] != s1[i + 1]) 
			{ ch = s1[i];
			v2.push_back(ch);
			for (int j = 0; j < s.size(); j++) 
				{ if (s[j] == ch) { c++; }
			}
			int temp = c;
			v.push_back(temp);
		}
	}
	for (int i = 0; i < v.size(); i++) 
		{ if (v[i] % k == 0) 
			{ int f = v[i] / k;
			v1.push_back(f);
		}  else 
			{ gh = -1;
			break;
		}
	}
	for (int i = 0; i < v1.size(); i++) 
		{ int m = v1[i];
		char g = v2[i];
		while (m > 0) 
			{ ans += g;
			m--;
		}
	}
	string sum = "";
	int our = k - 1;
	while (our >= 0) 
		{ sum += ans;
		our--;
	}
	if (gh == -1) 
		{ cout << -1 << endl;
	}  else 
		{ cout << sum << endl ;
	}
	return 0;
}
