#include <bits/stdc++.h>

using namespace std;

long long int expo_fast(long long int a, long long int b) 
	{ a = a;
	long long int result = 1;
	while (b) 
		{ if (b & 1) result = (result * a);
		b >>= 1;
		a = (a * a);
	}
	return (result);
}
void take_in(vector<long long int> *arr) 
	{ for (int i = 0; i < arr->size(); i++) cin >> (*(arr))[i];
}
void disp_arr(vector<long long int> *arr) 
	{ for (int i = 0; i < arr->size(); i++) cout << (*(arr))[i] << " ";
}
string func(string s, int n) 
	{ string q;
	q.resize(n);
	q[0] = s[0];
	q[1] = s[1];
	q[2] = s[2];
	for (int i = 3; i < n; i++) 
		{ if (i % 3 == 0)
			{ q[i] = q[0];
		} else if (i % 3 == 1)
			{ q[i] = q[1];
		} else
			{ q[i] = q[2];
	} }
	return q;
}
int main() 
	{ string s;
	cin >> s;
	stack<char> stk;
	long long int ans = 0;
	bool cond1 = true, cond2 = true;
	for (int i = 0; i < s.length(); i++) 
		{ if (s[i] == '0') 
			{ if (cond1) 
				{ cond1 = false;
				cout << "1 1\n";
			}  else 
				{ cond1 = true;
				cout << "3 1\n";
			}
		}  else 
			{ if (cond2) 
				{ cond2 = false;
				cout << "4 3\n";
			}  else 
				{ cond2 = true;
				cout << "4 1\n" ;

			}
		}
	}
}
