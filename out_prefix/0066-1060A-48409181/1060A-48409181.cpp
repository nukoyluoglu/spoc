#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, i = 0, cnt = 0;
	string s;
	cin >> n >> s;
	while (s[i] != '\0') 
		{ if (s[i] == '8') cnt++;
		i++;
	}
	if (n >= 11 && n / 11 <= cnt && cnt != 0)
		{ cout << n / 11 << "\n";
	} else if (n >= 11 && n / 11 >= cnt && cnt != 0)
		{ cout << cnt << "\n";
	} else
		{ cout << "0\n" ;

	} return 0;
}
