#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string s;
	cin >> s;
	int len = s.length();
	int n;
	cin >> n;
	string array[n];
	string output[n];
	int count = 0;
	for (int i = 0; i < n; i++) 
		{ cin >> array[i];
		int flag = 0;
		if (array[i].length() < len) { continue; }
		for (int j = 0; j < len; j++) 
			{ if (array[i][j] != s[j]) 
				{ flag = 1;
				break;
			}
		}
		if (flag == 0) { output[count++] = array[i]; }
	}
	if (count == 0) 
		{ cout << s << endl;
		return 0;
	}
	sort(output, output + count);
	cout << output [ 0 ] << endl ;
	return 0;
}
