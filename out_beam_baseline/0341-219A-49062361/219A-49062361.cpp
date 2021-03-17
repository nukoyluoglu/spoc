#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int i, Len, k, Arr[26] = {0};
	string s, kString;
	cin >> k >> s;
	for (i = 0; i < s.length(); i++) { Arr[s[i] - 'a']++; }
	for (i = 0; i < 26; i++) 
		{ if (Arr[i] % k != 0)
		{
			break;
		}  else 
			{ kString.append(Arr[i] / k, 'a' + i);
		}
	}
	if (i == 26) 
		{ while (k--) { cout << kString; }
		cout << endl;
	}  else 
		{ cout << - 1 << endl ;
	}
	return 0;
}
