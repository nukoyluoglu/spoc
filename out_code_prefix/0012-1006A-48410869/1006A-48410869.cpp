#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	while (cin >> n) 
		{ int flag = 1;
		for (int i = 0; i < n; i++) 
			{ int num;
			cin >> num;
			if (num == 0) 
				{ if (flag)
					{ cout << num, flag = 0;
				} else
					{ cout << " " << num;
			} }  else if (num % 2 == 0) 
				{ if (flag)
					{ cout << num - 1, flag = 0;
				} else
					{ cout << " " << num - 1;
			} }  else 
				{ if (flag)
					{ cout << num, flag = 0;
				} else
					{ cout << " " << num;
			} }
		}
		cout << endl ;

	}
}
